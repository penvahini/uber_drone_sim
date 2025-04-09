# Drone Uber Simulation System

DockerHub: 
https://hub.docker.com/repository/docker/roshangokul/drone_sim/general

Project overview:
This project is a full-stack simulation I developed to replicate a drone-based ride-sharing system, modeled after apps like Uber, using a map of the University of Minnesota Twin Cities campus. The core idea is to allow users to simulate and schedule trips where drones transport robots between different locations on campus. The simulation runs on a web interface where users can schedule trips by entering a name, selecting a pickup and drop-off location, and choosing from one of three pathfinding algorithms: A* Search, Depth-First Search, or Dijkstra’s Algorithm.

Once a trip is scheduled, a drone is initialized in the simulation to complete that request. The drone will pick up the robot and carry it across the campus map to its destination. Users can schedule multiple trips in one session, and the simulation will handle all the routing and trip management in sequence.

To make the simulation more realistic, I implemented a full battery system for the drones. Each drone now tracks its battery level, which drains as the drone moves. Before starting any trip, the drone calculates if it has enough battery to complete the journey and reach a charging station afterward. If not, it will first fly to the nearest of several charging stations spread across campus, recharge, and then proceed with the scheduled trip. This makes the simulation more dynamic and realistic—similar to how an electric Uber or delivery drone would behave in real life.

Along with the battery system, I also built a real-time notification system. These notifications appear on the simulation’s sidebar and let the user know what the drone is doing at each step—whether it's picking up a robot, delivering it, arriving at a charging station, recharging, or running low on battery. It also shows the drone’s current battery percentage at key points during the simulation. This feature helps users track the drone's progress without having to visually follow it on the 3D map, improving both usability and transparency.

How to run the simulation:
The basis for running the simulation relies on utilizing ports and port forwarding. If the simulation is run on a CSE Labs machine, Vole, or using an SSH connection, simply going to the directory the project is located in, using the command “make -j” and then, depending on which port the user wants to utilize, run the command “./build/bin/transit_service (enter port number)/web/”. This will allow the user to run the simulation. To view the simulation, the user can use two links:http://127.0.0.1: (enter port number here) in order to view the simulation, and http://127.0.0.1:(enter port number here)/schedule.html in order to schedule trips. If the user decides to use a local device, then the use of Docker is necessary. In order to run the simulation on Docker, we can simply use the command docker run --rm -it -p (enter port number here): (enter port number here) roshangokul/drone_sim.  Once this command is entered in the local device’s terminal, you can use the two previous links to access the designated webpages.

