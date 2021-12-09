//1. Data Structures...
//1.1 Array (Linear data structure)
//1.2 Graph (Non-Linear Data structure)

//2. Algorithm...
//2.1 Sorting Algorithm
//2.2 Searching Algorithm
//2.3 dijkstra's Algorithm


#include<iostream>
#include<map>
#include<list>
#include<set>
#include<climits>

using namespace std;
struct data{
string state, capital, chief_minister, official_language;
float population,area;
};

void display(struct data a[] , int n)
{
  cout<<"STATES"<<"\t\t\t"<<"CAPITAL"<<"\t\t"<<"CHIEF_MINISTER"<<"\t\t\t"<<"POPULATION(lakhs)"<<"\t\t"<<"AREA(thousand km^2)"<<"\t\t"<<"OFFICIAL_LANGUAGE"<<endl<<endl;
for(int i=0; i<=27; i++)
{
  cout<<a[i].state;
 
 if(i==0 or i==4 or i==9 or i==10 or i==12 or i==13 or i==15 or i==17 or i==20 or i==22 or i==23 or i==25 or i==26 or i==27)
   cout<<"\t\t";
if(i==1 or i==8 )
   cout<<"\t";
if(i==2 or i==3 or i==5 or i==6 or i==7 or i==11 or i==14 or i==16 or i==18 or i==19 or i==21 or i==24)
   cout<<"\t\t\t";
  
  
cout<<a[i].capital;
  
  if(i==1 or i==0 or i==4 or i==6  or i==7 or i==10 or i==11 or i==15 or i==18 or i==19 or i==23 or i==24 or i==26)
   cout<<"\t";
   if(i==2 or i==3 or i==5 or i==8 or i==9 or i==12 or i==13 or i==14 or i==16 or i==17 or i==20 or i==21 or i==22 or i==25 or i==27) 
   cout<<"\t\t";

  
cout<<a[i].chief_minister<<"\t\t";
  
  if(i==3 or i==4 or i==1 or i==5 or i==6 or i==8 or i==9 or i==10 or i==14 or i==15 or i==16 or i==17 or i==18 or i==20 or i==22 or i==25 or i==27)
   cout<<"\t";
  
  cout<<a[i].population<<"\t\t\t\t";
  
  cout<<a[i].area<<"\t\t\t\t";
  
  cout<<a[i].official_language<<endl;
}  
cout<<endl;
}




void display_pop(struct data a[] , int n)
{
  cout<<"STATES"<<"\t\t\t"<<"CAPITAL"<<"\t\t"<<"CHIEF_MINISTER"<<"\t\t\t"<<"POPULATION(lakhs)"<<"\t\t"<<"AREA(thousand km^2)"<<"\t\t"<<"OFFICIAL_LANGUAGE"<<endl<<endl;
for(int i=0; i<=27; i++)
{
  cout<<a[i].state;
 
 if(i==1 or i==0 or i==4 or i==7 or i==9  or i==8 or i==11 or i==13 or i==14  or i==16 or i==18 or i==20 or i==21 or i==22 or i==23 or i==24  or i==26 or i==27)
   cout<<"\t\t";
if(i==1 or i==8 or i==0 or i==3 or i==6 or i==9)
   cout<<"\t";
if(i==2  or i==5 or i==10  or i==12  or i==15  or i==17  or i==19 or i==25 )
   cout<<"\t\t\t";
  
  

  cout<<a[i].capital;
  
  if(i==1  or i==4 or i==6 or i==8   or i==9 or i==11 or i==13 or i==15 or i==16 or i==17 or i==18 or i==19 or i==20)
   cout<<"\t";
   if(i==0 or i==2 or i==3 or i==5  or i==7  or i==10 or i==12  or i==14  or i==21 or i==22 or i==23 or i==24 or i==25 or i==26 or i==27) 
   cout<<"\t\t";

  

  cout<<a[i].chief_minister<<"\t\t";
  
  if( i==0 or i==3   or i==5 or i==6 or i==7  or i==10 or i==11 or i==13 or i==14  or i==17 or i==19 or i==20 or i==21 or i==22 or i==24 or i==25 or i==27)
   cout<<"\t";
  
  cout<<a[i].population<<"\t\t\t\t";
  
  cout<<a[i].area<<"\t\t\t\t";
  
  cout<<a[i].official_language<<endl;
}  
cout<<endl;
}





void display_area(struct data a[] , int n)
{
  cout<<"STATES"<<"\t\t\t"<<"CAPITAL"<<"\t\t"<<"CHIEF_MINISTER"<<"\t\t\t"<<"POPULATION(lakhs)"<<"\t\t"<<"AREA(thousand km^2)"<<"\t\t"<<"OFFICIAL_LANGUAGE"<<endl<<endl;
for(int i=0; i<=27; i++)
{
  cout<<a[i].state;
 
 if(i==0 or i==1 or i==2 or i==3 or i==5 or i==6 or i==8 or i==9 or i==10 or i==11 or i==13 or i==16  or i==18   or i==23 or i==25 or i==27)
   cout<<"\t\t";
if(i==8 or i==14 or i==17 or i==27 )
   cout<<"\t";
if(i==4 or i==7 or i==12 or i==15  or i==19 or i==20 or i==21 or i==22 or i==24 or i==26 )
   cout<<"\t\t\t";
  
  
cout<<a[i].capital;
  
  if(  i==6  or i==4 or i==5 or i==8 or i==9 or i==11 or i==14 or i==18 or i==19 or i==20 or i==21 or i==23  or i==26)
   cout<<"\t";
   if( i==0 or i==1 or i==2 or i==3  or i==7  or i==10 or i==12 or i==13  or i==15 or i==16 or i==17 or i==22 or i==24 or i==25 or i==27) 
   cout<<"\t\t";

  
cout<<a[i].chief_minister<<"\t\t";
  
  if(i==0 or i==3 or i==4 or i==5 or i==7 or i==8 or i==9 or i==10 or i==12 or i==13 or i==14 or i==16 or i==17  or i==22 or i==23 or i==24 or i==25)
   cout<<"\t";
  
  cout<<a[i].population<<"\t\t\t\t";
  
  cout<<a[i].area<<"\t\t\t\t";
  
  cout<<a[i].official_language<<endl;
}  
cout<<endl;
}




//SELECTION_SORT ...

void selection_sort(struct data arr[], int n, string check)
{
  if(check=="pop"){   //for ascending order...
  for(int i=0; i<n-1; i++)
  {
    int min_index=i;
    for(int j=i; j<=n-1; j++)
    {
      if(arr[j].population<arr[min_index].population)
        min_index=j;
        }
        swap(arr[i],arr[min_index]);
  }
    }

  else    //descending order...
  {
    for(int i=n-1; i>0; i--)
  {
    int max_index=i;
    for(int j=i; j>=0; j--)
    {
      if(arr[j].area<arr[max_index].area)
        max_index=j;
        }
        swap(arr[i],arr[max_index]);
  }
  }

  return;
}




//SEQUENTIAL_SEARCH

int sq_search_states(struct data a[], int n, string name)
{
   for(int i=0; i<n; i++)
   {
    if (a[i].state==name)
          return i;
    }

  return -1;
}





//GRAPH DIJSKTRA'S - ALGORITHM to find shortest distance between two nodes...

template<typename T>
class Graph{
     map<T, list<pair<T, int> > > m;

public:
  void addEdge(T u, T v, int dist ){//bool bidir=true
    m[u].push_back(make_pair(v, dist));
    //if(bidir){
      m[v].push_back(make_pair(u, dist));
    //}

     }

     
     //Dijstra's Algorithm
     void dijsktra(T src){
      map< T, int> dist;

      for(auto j:m){
        dist[j.first]=INT_MAX; 
      }

      set <pair <int, T> > s;

      dist[src]=0;
      s.insert(make_pair(0, src));

      while(!s.empty()){

        //Find the pair at the front.
        auto p = *(s.begin());
        T node = p.second;

        int nodeDist = p.first;
        s.erase(s.begin());

        //Iterate over neighbours of the current node
        for(auto childPair : m[node]){

          if (nodeDist + childPair.second < dist[childPair.first]){

            //In the set updation of a particular is not passible
            //We have to remove the old pair, and insert the new pair to simulation updation
            T dest = childPair.first;
            auto f = s.find(make_pair(dist[dest], dest));
            if(f!=s.end()){
              s.erase(f);
            }
            //Insert the new pair
          dist[dest]= nodeDist + childPair.second;
          s.insert(make_pair(dist[dest], dest));
          
          }

        }
      
     }
       // print distance
       for(auto d:dist){
         cout<<d.first<<" --> "<< d.second<<" km"<<endl;
     }

   }
};




int main(){

//1.1 array (Linear data structure)...
  struct data a[28];

a[0].state="Andhra_Pradesh";    a[0].capital="Hyderabad";           a[0].chief_minister="Y._S._Jagan_Mohan_Reddy";  a[0].population=49.5;  a[0].area=160;  a[0].official_language="Telugu";
a[1].state="Arunachal_Pradesh"; a[1].capital="Itanagar";            a[1].chief_minister="Pema_Khandu";              a[1].population=13;    a[1].area=83;   a[1].official_language="English";
a[2].state="Assam";             a[2].capital="Dispur";              a[2].chief_minister="Sarbananda_Sonowal";       a[2].population=31.1;  a[2].area=78;   a[2].official_language="Assamese";
a[3].state="Bihar";             a[3].capital="Patna";               a[3].chief_minister="Nitish_Kumar";             a[3].population=104.0; a[3].area=94;   a[3].official_language="Hindi";
a[4].state="Chhattisgarh";      a[4].capital="Naya_Raipur";         a[4].chief_minister="Bhupesh_Baghel";           a[4].population=32.1;  a[4].area=135;  a[4].official_language="Hindi";
a[5].state="Goa";               a[5].capital="Panaji";              a[5].chief_minister="Pramod_Sawant";            a[5].population=1.4;   a[5].area=160;  a[5].official_language="Konkani";
a[6].state="Gujarat";           a[6].capital="Gandhinagar";         a[6].chief_minister="Vijay_Rupani";             a[6].population=60.4;  a[6].area=196;  a[6].official_language="Gujarati";
a[7].state="Haryana";           a[7].capital="Chandigarh";          a[7].chief_minister="Manohar_Lal_Khattar";      a[7].population=25.3;  a[7].area=44;   a[7].official_language="Hindi";
a[8].state="Himachal_Pradesh";  a[8].capital="Shimla";              a[8].chief_minister="Jai_Ram_Thakur";           a[8].population=6.8;   a[8].area=55;   a[8].official_language="Hindi";
a[9].state="Jharkhand";         a[9].capital="Ranchi";              a[9].chief_minister="Hemant_Soren";             a[9].population=32.9;  a[9].area=74;   a[9].official_language="Hindi";
a[10].state="Karnataka";        a[10].capital="Bangalore";          a[10].chief_minister="B_S_Yediyurappa";         a[10].population=61.0; a[10].area=191; a[10].official_language="Kannada";
a[11].state="Kerala";           a[11].capital="Trivandrum";         a[11].chief_minister="Pinarayi_Vijayan";        a[11].population=33.4; a[11].area=38;  a[11].official_language="Malayalam";
a[12].state="Madhya_Pradesh";   a[12].capital="Bhopal";             a[12].chief_minister="Shivraj_Singh_Chouhan";   a[12].population=72.6; a[12].area=308; a[12].official_language="Hindi";
a[13].state="Maharashtra";      a[13].capital="Mumbai";             a[13].chief_minister="Uddhav_Thackeray";        a[13].population=112.3;a[13].area=307; a[13].official_language="Marathi";
a[14].state="Manipur";          a[14].capital="Imphal";             a[14].chief_minister="N_Biren_Singh";           a[14].population=28.5; a[14].area=22;  a[14].official_language="Meitei";
a[15].state="Meghalaya";        a[15].capital="Shillong";           a[15].chief_minister="Conrad_Sangma";           a[15].population=29.6; a[15].area=22;  a[15].official_language="English";
a[16].state="Mizoram";          a[16].capital="Aizawl";             a[16].chief_minister="Zoramthanga";             a[16].population=10.9; a[16].area=21;  a[16].official_language="Mizo";
a[17].state="Nagaland";         a[17].capital="Kohima";             a[17].chief_minister="Neiphiu_Rio";             a[17].population=19.7; a[17].area=16;  a[17].official_language="English";
a[18].state="Odisha";           a[18].capital="Bhubaneswar";        a[18].chief_minister="Naveen_Patnaik";          a[18].population=41.9; a[18].area=155; a[18].official_language="Odia";
a[19].state="Punjab";           a[19].capital="Chandigarh";         a[19].chief_minister="Captain_Amarinder_Singh"; a[19].population=27.4; a[19].area=50;  a[19].official_language="Punjabi";
a[20].state="Rajasthan";        a[20].capital="Jaipur";             a[20].chief_minister="Ashok_Gehlot";            a[20].population=68.5; a[20].area=342; a[20].official_language="Hindi";
a[21].state="Sikkim";           a[21].capital="Gangtok";            a[21].chief_minister="Prem_Singh_Tamang";       a[21].population=6;    a[21].area=7;   a[21].official_language="Nepali";
a[22].state="Tamil_Nadu";       a[22].capital="Chennai";            a[22].chief_minister="Edappadi_K";              a[22].population=72.1; a[22].area=130; a[22].official_language="Tamil";
a[23].state="Telangana";        a[23].capital="Hyderabad";          a[23].chief_minister="K_Chandrashekar_Rao";     a[23].population=35.1; a[23].area=114; a[23].official_language="Telugu";
a[24].state="Tripura";          a[24].capital="Agartala";           a[24].chief_minister="Biplab_Kumar_Deb";        a[24].population=3.6;  a[24].area=10;  a[24].official_language="Kokborok";
a[25].state="Uttar_Pradesh";    a[25].capital="Lucknow";            a[25].chief_minister="Yogi_Adityanath";         a[25].population=199.8;a[25].area=243; a[25].official_language="Hindi";
a[26].state="Uttarakhand";      a[26].capital="Dehradun";           a[26].chief_minister="Trivendra_Singh_Rawat";   a[26].population=10.0; a[26].area=53;  a[26].official_language="Hindi";
a[27].state="West_Bengal";      a[27].capital="Kolkata";            a[27].chief_minister="Mamata Banerjee";         a[27].population=91.2; a[27].area=88;  a[27].official_language="Bengali";


//display the details
cout<<"\nActual Data Overview of the Project is :- \n\n";
display(a ,28);
  
  


//2.1 Sorting Algorithm...
cout<<"\n\n1. SORTING..."<<endl;
cout<<"Sorting:- According to Population type 'pop' or According to Area type 'area' :- ";
string check;
cin>>check;
selection_sort(a, 28, check);
cout<<endl;
if(check=="pop"){
  cout<<"\n----------------------------Data Sorted according to population are as follows --------------------------------\n\n ";
display_pop(a ,28);
}
else{
  cout<<"\n----------------------------Data Sorted according to area are as follows ---------------------------------\n\n";
display_area(a ,28);
}




//2.2 Searching Algorithm...
cout<<endl<<endl;
cout<<"2. SEARCHING..."<<endl;
cout<<"Enter the STATE NAME to see its details (CASE-SENTITIVE):- ";
string name;
cin>>name;
int i=sq_search_states(a,28,name);
if(i+1){
cout<<"State             :- "<<"      "<<name<<endl<<endl; 
cout<<"Capital           :- "<<"      "<<a[i].capital<<endl<<endl;
cout<<"Cheif Minister    :- "<<"      "<<a[i].chief_minister<<endl<<endl;
cout<<"Population        :- "<<"      "<<a[i].population<<" lakh"<<endl<<endl;
cout<<"Area              :- "<<"      "<<a[i].area<<" thousand Km^2"<<endl<<endl;
cout<<"Official language :- "<<"      "<<a[i].official_language<<endl<<endl;

}
else
  cout<<"OOP's state not found ! "<<endl;





//1.2 Graph (Non-Linear Data structure)
//2.3 dijkstra's Algorithm...
cout<<"\n\n\n";
cout<<"3. DIJKSTRA'S..."<<endl;

Graph<string> india;
     
     india.addEdge("Trivandrum","Bangalore", 683);
     india.addEdge("Trivandrum","Chennai", 725);
     
     india.addEdge("Chennai","Bangalore", 346);
     india.addEdge("Chennai","Hyderabad", 627);
     
     india.addEdge("Bangalore","Hyderabad", 569);
     india.addEdge("Bangalore","Panaji", 583);
     india.addEdge("Bangalore","Mumbai", 981);
     
     india.addEdge("Panaji","Mumbai", 583);
     
     india.addEdge("Hyderabad","Mumbai", 710);
     india.addEdge("Hyderabad","Naya_Raipur", 807);
     india.addEdge("Hyderabad","Bhubaneswar", 1050);

     india.addEdge("Mumbai","Naya_Raipur", 1152);
     india.addEdge("Mumbai","Bhopal", 776);
     india.addEdge("Mumbai","Gandhinagar", 552);

     india.addEdge("Naya_Raipur","Bhubaneswar", 536);
     india.addEdge("Naya_Raipur","Ranchi", 575);
     india.addEdge("Naya_Raipur","Lucknow", 852);
     india.addEdge("Naya_Raipur","Bhopal", 656);

     india.addEdge("Bhubaneswar","Kolkata", 440);
     india.addEdge("Bhubaneswar","Ranchi", 461);

     india.addEdge("Gandhinagar","Bhopal", 601);
     india.addEdge("Gandhinagar","Jaipur", 660);

     india.addEdge("Bhopal","Lucknow", 652);
     india.addEdge("Bhopal","Jaipur", 595);

     india.addEdge("Ranchi","Kolkata", 407);
     india.addEdge("Ranchi","Patna", 326);
     india.addEdge("Ranchi","Lucknow", 717);

     india.addEdge("Kolkata","Patna", 551);
     india.addEdge("Kolkata","Gangtok", 675);
     india.addEdge("Kolkata","Dispur", 1015);

     india.addEdge("Jaipur","Lucknow", 573);
     india.addEdge("Jaipur","Chandigarh", 507);
     india.addEdge("Jaipur","Chandigarh", 507);

     india.addEdge("Lucknow","Patna", 538);
     india.addEdge("Lucknow","Dehradun", 755);
     india.addEdge("Lucknow","Chandigarh", 803);

     india.addEdge("Chandigarh","Dehradun", 172);
     india.addEdge("Chandigarh","Shimla", 112);

     india.addEdge("Dehradun","Shimla", 228);

     india.addEdge("Agartala","Aizawl", 336);
     india.addEdge("Agartala","Dispur", 535);

     india.addEdge("Aizawl","Dispur", 462);
     india.addEdge("Aizawl","Imphal", 401);

     india.addEdge("Dispur","Shillong", 89);
     india.addEdge("Dispur","Imphal", 477);
     india.addEdge("Dispur","Kohima", 421);
     india.addEdge("Dispur","Itanagar", 319);

     india.addEdge("Imphal","Kohima", 275);

     india.addEdge("Kohima","Itanagar", 261);



     cout<<"Enter the Capital-(Source) City (CASE-SENSITIVE)-(type EXACT NAME) to find the distances to other cities: ";
     string name1;
     cin>>name1;
     cout<<endl;
     india.dijsktra(name1);
     cout<<"\n--------------------------<<NOTE THE DISTANCES OF CITIES ARE ARBITRARY NOT ON REAL BASIS...>>-----------------------------"<<endl<<endl;
return 0;
}


    