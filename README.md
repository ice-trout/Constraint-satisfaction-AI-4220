# Constraint-satisfaction-AI-4220

The goal with this project is to solve a constraint satisfaction problem by assigning color values for symbology on a county map of 1883 Idaho. The program reads a .txt file with the county names and a graph that is representive of which counties border each other.</br>

<h1>Graph:</h1>
0 1 1 0 0 0 0 0 0 0 0 0 1 0</br>
1 0 1 0 0 0 0 0 0 0 0 0 1 0</br>
1 1 0 1 1 0 0 0 0 1 1 0 0 0</br>
0 0 1 0 1 1 0 0 0 0 0 0 0 0</br>
0 0 1 1 0 1 0 1 0 0 1 0 0 0</br>
0 0 0 1 1 0 1 1 0 0 0 0 0 0</br>
0 0 0 0 0 1 0 1 1 0 0 0 0 0</br>
0 0 0 0 1 1 1 0 1 1 1 1 0 0</br>
0 0 0 0 0 0 1 1 0 0 0 1 0 0</br>
0 0 1 0 0 0 0 1 0 0 1 1 0 0</br>
0 0 1 0 1 0 0 1 0 1 0 0 0 0</br>
0 0 0 0 0 0 0 1 1 1 0 0 0 1</br>
1 1 0 0 0 0 0 0 0 0 0 0 0 0</br>
0 0 0 0 0 0 0 0 0 0 0 1 0 0</br>

<h1>County list:</h1>
NezPerces</br>
Shoshone</br>
Idaho</br>
Washington</br>
Boise</br>
Ada</br>
Owyhee</br>
Alturas</br>
Cassia</br>
Lemhi</br>
Custer</br>
Oneida</br>
Kootenai</br>
BearLake</br>

<h1>Visualization:</h1>
<img src="https://raw.githubusercontent.com/ice-trout/Constraint-satisfaction-AI-4220/main/idaho1883%20Map.jpg" height="600">
Program assigned symbology:
<img src="https://github.com/ice-trout/Constraint-satisfaction-AI-4220/blob/main/AI-map-coloring.png" height="600">
