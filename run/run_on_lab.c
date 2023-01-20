/* прога выбирается из лабиринта */
/* run_on_lab.c */

#include <stdio.h>

#include <stddef.h>
#include <math.h>
#include <stdlib.h>
char *maze_runner(const int *maze, size_t n, const char *directions) 
{
	int i, k, o, p = 0;
	int **new_maze = (int**)malloc(sqrt(n) * sizeof(int*));
	
	for (i = 0; i  <= sqrt(n); i++){
		new_maze[i] = (int *)malloc(sqrt(n) * sizeof(int));
	}	
	for (i = 0; i < sqrt(n); i++){
		for (k = 0; k < sqrt(n); p++, k++){
			new_maze[i][k] = maze[p];
		}
	}			

				
	for (i = 0; i < sqrt(n); i++){
		for (k = 0; k < sqrt(n); k++){
			if (new_maze[i][k] == 2){
				break;
			}
		}
	}			
	
	for (o = 0; directions[o]; o++){
		if (directions[o] == 'N'){
			i--;
			if (i < 0 || new_maze[i][k] == 1){
				return "Dead";
			}
			if (new_maze[i][k] == 3){
				return "Finish";
			}
		}

		else if (directions[o] == 'E'){
			k++;
			if (k == sqrt(n) || new_maze[i][k] == 1){
				return "Dead";
			}
			if (new_maze[i][k] == 3){
				return "Finish";
			}
		}
		
		else if (directions[o] == 'W'){
			k--;
			if (k < 0 || new_maze[i][k] == 1){
				return "Dead";
			}
			if (new_maze[i][k] == 3){
				return "Finish";
			}
		}

		else if (directions[o] == 'S'){
			i++;
			if (i == sqrt(n) || new_maze[i][k] == 1){
				return "Dead";
			}
			if (new_maze[i][k] == 3){
				return "Finish";
			}
		}

	}
	//printf ("HAHAHA");
	return "Lost';


}
