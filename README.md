# Firefly2.0

This project is designed to simulate forest fire embers using Unreal Engine 4 (UE4) and the Firefly_cpp plugin. It provides users with the ability to control and observe the behavior of the fire, embers, and background actors within the virtual environment.

![image](https://github.com/ERGOWHO/Firefly2.0/assets/69840908/bbb13a11-2e3a-4b4b-b9f5-5a1a5d21e2cc)

Main Fire Map

The main fire map is located at: D:/Project/UE4projects/firefly_cpp/Content/ForestCollection/Maps/ForestCollection_ConiferForest_Demo.umap

Main Blueprint Code

The main blueprint code is stored in: Ember.bp

Custom Settings

Custom settings can be configured in the setting.txt file located in the Content folder. The setting.txt file contains two rows of data:

Background temperature
Background intensity
Users can dynamically read the camera and fire source positions from the setting.txt file using the "SetActorLocationAndRotation" function.

Output Options

Users have the choice to output data to a text file instead of the default output log.

User Guidance

For detailed user guidance, please refer to the User Guidance Document https://docs.google.com/document/d/1J-dv9IMezbZtarKjENWA8B82AtUn23zi_eShsdpj7hc/edit?usp=sharing.

Please feel free to explore and experiment with the Firefly_cpp project. If you have any questions or encounter any issues, don't hesitate to contact us.
