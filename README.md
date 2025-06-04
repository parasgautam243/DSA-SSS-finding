# Shortest City Distance Finder

## Project Overview

This project implements a program to find the shortest distance between capital cities using **Dijkstra's Algorithm**. Dijkstra's Algorithm is a well-known algorithm for finding the shortest path in a graph, making it highly suitable for this task of calculating distances in a network of cities.

The program models cities as nodes in a graph, and the roads connecting them as weighted edges representing the distance between the cities. By implementing this algorithm, the program ensures efficient and accurate distance calculation between any two cities.

## Core Functionality

- **Graph Representation**: Cities are modeled as nodes, and the roads between them are represented as edges with weight values corresponding to distances.
- **Dijkstra's Algorithm**: The core algorithm used to calculate the shortest path between two cities. It iteratively selects the closest node and updates the shortest distances to its neighboring nodes until the optimal path is found.

## Data Management

The program includes two key features to manage city data effectively:
- **Sort**: The city data is sorted in an efficient manner to allow faster searches and optimized data retrieval.
- **Search**: A search function allows users to quickly find specific cities within the dataset, further improving the speed and ease of use.

## Optimizations

The program optimizes data handling by employing **well-established data structures**:
- **HashMaps**: For constant-time look-ups of cities and their associated data.
- **Arrays**: To store the shortest distances and update them during the execution of the algorithm.

These optimizations ensure the program can efficiently scale even as the dataset grows, maintaining fast performance for large numbers of cities.

## Key Features
- Calculates the shortest distance between two cities in a graph using **Dijkstra's Algorithm**.
- Implements **sorting** and **searching** functionalities to improve data retrieval times.
- Optimizes data storage and access for large-scale city data using efficient data structures.


