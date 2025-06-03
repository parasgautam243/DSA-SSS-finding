#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <list>
#include <queue>
#include <climits>

using namespace std;

struct StateInfo {
    string name;
    string capital;
    string chief_minister;
    string official_language;
    double population;    // in lakhs
    double area;          // in thousand km^2
};

// Prints a neatly aligned table of all states in `states`
void displayAll(const vector<StateInfo>& states) {
    // Column widths
    const int W_STATE    = 20;
    const int W_CAPITAL  = 15;
    const int W_CM       = 25;
    const int W_POP      = 12;
    const int W_AREA     = 12;
    const int W_LANG     = 15;

    // Header
    cout << left
         << setw(W_STATE)   << "STATE"
         << setw(W_CAPITAL) << "CAPITAL"
         << setw(W_CM)      << "CHIEF_MINISTER"
         << setw(W_POP)     << "POPULATION"
         << setw(W_AREA)    << "AREA"
         << setw(W_LANG)    << "OFFICIAL_LANG"
         << "\n\n";

    // Rows
    for (const auto& s : states) {
        cout << left
             << setw(W_STATE)   << s.name
             << setw(W_CAPITAL) << s.capital
             << setw(W_CM)      << s.chief_minister
             << setw(W_POP)     << fixed << setprecision(1) << s.population
             << setw(W_AREA)    << fixed << setprecision(0) << s.area
             << setw(W_LANG)    << s.official_language
             << "\n";
    }
    cout << endl;
}

// Search for a state by name (case-sensitive). Returns index or -1 if not found.
int findStateIndex(const vector<StateInfo>& states, const string& name) {
    for (size_t i = 0; i < states.size(); ++i) {
        if (states[i].name == name) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

// Dijkstra’s algorithm on a graph with string‐labeled nodes
void runDijkstra(const map<string, list<pair<string,int>>>& graph, const string& src) {
    // Min-heap: pair<distance, node>
    priority_queue<pair<int,string>, vector<pair<int,string>>, greater<>> pq;
    map<string,int> dist;

    // Initialize distances to "infinity"
    for (auto& kv : graph) {
        dist[kv.first] = INT_MAX;
    }
    if (dist.find(src) == dist.end()) {
        cout << "Source city \"" << src << "\" not in graph.\n\n";
        return;
    }
    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [curDist, u] = pq.top();
        pq.pop();
        if (curDist > dist[u]) continue;

        for (auto& [v, w] : graph.at(u)) {
            int newDist = curDist + w;
            if (newDist < dist[v]) {
                dist[v] = newDist;
                pq.push({newDist, v});
            }
        }
    }

    cout << "Distances from " << src << ":\n";
    for (auto& kv : dist) {
        cout << "  " << setw(15) << kv.first << " -> "
             << kv.second << " km\n";
    }
    cout << "\n";
}

int main() {
    // 1. Populate data for all 28 states
    vector<StateInfo> states = {
        { "Andhra_Pradesh",   "Hyderabad",        "Y._S._Jagan_Mohan_Reddy",    "Telugu",    49.5, 160 },
        { "Arunachal_Pradesh","Itanagar",         "Pema_Khandu",                "English",   13.0,  83 },
        { "Assam",            "Dispur",           "Sarbananda_Sonowal",         "Assamese",  31.1,  78 },
        { "Bihar",            "Patna",            "Nitish_Kumar",               "Hindi",    104.0,  94 },
        { "Chhattisgarh",     "Naya_Raipur",      "Bhupesh_Baghel",             "Hindi",     32.1, 135 },
        { "Goa",              "Panaji",           "Pramod_Sawant",              "Konkani",    1.4, 160 },
        { "Gujarat",          "Gandhinagar",      "Vijay_Rupani",               "Gujarati",  60.4, 196 },
        { "Haryana",          "Chandigarh",       "Manohar_Lal_Khattar",        "Hindi",     25.3,  44 },
        { "Himachal_Pradesh", "Shimla",           "Jai_Ram_Thakur",             "Hindi",      6.8,  55 },
        { "Jharkhand",        "Ranchi",           "Hemant_Soren",               "Hindi",     32.9,  74 },
        { "Karnataka",        "Bangalore",        "B_S_Yediyurappa",            "Kannada",   61.0, 191 },
        { "Kerala",           "Trivandrum",       "Pinarayi_Vijayan",           "Malayalam", 33.4,  38 },
        { "Madhya_Pradesh",   "Bhopal",           "Shivraj_Singh_Chouhan",      "Hindi",     72.6, 308 },
        { "Maharashtra",      "Mumbai",           "Uddhav_Thackeray",           "Marathi",  112.3, 307 },
        { "Manipur",          "Imphal",           "N_Biren_Singh",              "Meitei",    28.5,  22 },
        { "Meghalaya",        "Shillong",         "Conrad_Sangma",              "English",   29.6,  22 },
        { "Mizoram",          "Aizawl",           "Zoramthanga",                "Mizo",      10.9,  21 },
        { "Nagaland",         "Kohima",           "Neiphiu_Rio",                "English",   19.7,  16 },
        { "Odisha",           "Bhubaneswar",      "Naveen_Patnaik",             "Odia",      41.9, 155 },
        { "Punjab",           "Chandigarh",       "Captain_Amarinder_Singh",    "Punjabi",   27.4,  50 },
        { "Rajasthan",        "Jaipur",           "Ashok_Gehlot",               "Hindi",     68.5, 342 },
        { "Sikkim",           "Gangtok",          "Prem_Singh_Tamang",          "Nepali",     6.0,   7 },
        { "Tamil_Nadu",       "Chennai",          "Edappadi_K",                 "Tamil",     72.1, 130 },
        { "Telangana",        "Hyderabad",        "K_Chandrashekar_Rao",        "Telugu",    35.1, 114 },
        { "Tripura",          "Agartala",         "Biplab_Kumar_Deb",           "Kokborok",   3.6,  10 },
        { "Uttar_Pradesh",    "Lucknow",          "Yogi_Adityanath",            "Hindi",    199.8, 243 },
        { "Uttarakhand",      "Dehradun",         "Trivendra_Singh_Rawat",      "Hindi",     10.0,  53 },
        { "West_Bengal",      "Kolkata",          "Mamata_Banerjee",            "Bengali",   91.2,  88 }
    };

    // 1. Display the original data
    cout << "\n=== Original State Data ===\n\n";
    displayAll(states);

    // 2. Sorting: by population (ascending) or area (descending)
    cout << "\n=== SORTING ===\n";
    cout << "Type \"pop\" to sort by population (ascending) or \"area\" to sort by area (descending): ";
    string criterion;
    cin >> criterion;

    if (criterion == "pop") {
        sort(states.begin(), states.end(),
             [](auto& a, auto& b) { return a.population < b.population; });
        cout << "\n--- Sorted by Population (ascending) ---\n\n";
        displayAll(states);

    } else if (criterion == "area") {
        sort(states.begin(), states.end(),
             [](auto& a, auto& b) { return a.area > b.area; });
        cout << "\n--- Sorted by Area (descending) ---\n\n";
        displayAll(states);

    } else {
        cout << "\nInvalid sort key. Displaying unsorted data.\n\n";
    }

    // 3. Searching: Find a state by its name
    cout << "\n=== SEARCHING ===\n";
    cout << "Enter the STATE NAME to see its details (CASE-SENSITIVE): ";
    string target;
    cin >> target;

    int idx = findStateIndex(states, target);
    if (idx >= 0) {
        const auto& s = states[idx];
        cout << "\nDetails for state: " << s.name << "\n\n"
             << "Capital           : " << s.capital << "\n"
             << "Chief Minister    : " << s.chief_minister << "\n"
             << "Population (lakhs): " << fixed << setprecision(1) << s.population << "\n"
             << "Area (thousand km^2): " << fixed << setprecision(0) << s.area << "\n"
             << "Official Language : " << s.official_language << "\n\n";
    } else {
        cout << "\nOops! State not found.\n\n";
    }

    // 4. Graph + Dijkstra’s Algorithm
    cout << "\n=== DIJKSTRA’S ALGORITHM ===\n";

    // Build the graph of capital-to-capital distances
    map<string, list<pair<string,int>>> graph;
    auto addEdge = [&](const string& u, const string& v, int dist) {
        graph[u].push_back({v, dist});
        graph[v].push_back({u, dist});
    };

    addEdge("Trivandrum",   "Bangalore",   683);
    addEdge("Trivandrum",   "Chennai",     725);
    addEdge("Chennai",      "Bangalore",   346);
    addEdge("Chennai",      "Hyderabad",   627);
    addEdge("Bangalore",    "Hyderabad",   569);
    addEdge("Bangalore",    "Panaji",      583);
    addEdge("Bangalore",    "Mumbai",      981);
    addEdge("Panaji",       "Mumbai",      583);
    addEdge("Hyderabad",    "Mumbai",      710);
    addEdge("Hyderabad",    "Naya_Raipur", 807);
    addEdge("Hyderabad",    "Bhubaneswar",1050);
    addEdge("Mumbai",       "Naya_Raipur",1152);
    addEdge("Mumbai",       "Bhopal",      776);
    addEdge("Mumbai",       "Gandhinagar", 552);
    addEdge("Naya_Raipur",  "Bhubaneswar", 536);
    addEdge("Naya_Raipur",  "Ranchi",      575);
    addEdge("Naya_Raipur",  "Lucknow",     852);
    addEdge("Naya_Raipur",  "Bhopal",      656);
    addEdge("Bhubaneswar",  "Kolkata",     440);
    addEdge("Bhubaneswar",  "Ranchi",      461);
    addEdge("Gandhinagar",  "Bhopal",      601);
    addEdge("Gandhinagar",  "Jaipur",      660);
    addEdge("Bhopal",       "Lucknow",     652);
    addEdge("Bhopal",       "Jaipur",      595);
    addEdge("Ranchi",       "Kolkata",     407);
    addEdge("Ranchi",       "Patna",       326);
    addEdge("Ranchi",       "Lucknow",     717);
    addEdge("Kolkata",      "Patna",       551);
    addEdge("Kolkata",      "Gangtok",     675);
    addEdge("Kolkata",      "Dispur",     1015);
    addEdge("Jaipur",       "Lucknow",     573);
    addEdge("Jaipur",       "Chandigarh",  507);
    addEdge("Lucknow",      "Patna",       538);
    addEdge("Lucknow",      "Dehradun",    755);
    addEdge("Lucknow",      "Chandigarh",  803);
    addEdge("Chandigarh",   "Dehradun",    172);
    addEdge("Chandigarh",   "Shimla",      112);
    addEdge("Dehradun",     "Shimla",      228);
    addEdge("Agartala",     "Aizawl",      336);
    addEdge("Agartala",     "Dispur",      535);
    addEdge("Aizawl",       "Dispur",      462);
    addEdge("Aizawl",       "Imphal",      401);
    addEdge("Dispur",       "Shillong",     89);
    addEdge("Dispur",       "Imphal",      477);
    addEdge("Dispur",       "Kohima",      421);
    addEdge("Dispur",       "Itanagar",    319);
    addEdge("Imphal",       "Kohima",      275);
    addEdge("Kohima",       "Itanagar",    261);

    cout << "\nEnter the capital (source) city to compute shortest distances (CASE-SENSITIVE): ";
    string src;
    cin >> src;
    cout << "\n";
    runDijkstra(graph, src);

    cout << "<<< NOTE: The distances shown are illustrative and not actual road/kilometer values. >>>\n\n";

    return 0;
}
