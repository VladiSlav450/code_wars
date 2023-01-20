/* mine.c */

#include "run_on_lab.c"



int main()
{
        
        int N = 7;        
        
        
        int mdaze[] ={1, 1, 1, 1, 1, 1, 1,  
                                1, 0, 0, 0, 0, 0, 3, 
                                1, 0, 1, 0, 1, 0, 1,
                                0, 0, 1, 0, 0, 0, 1,    
                                1, 0, 1, 0, 1, 0, 1,
                                1, 0, 0, 0, 0, 0, 1,
                                1, 2, 1, 0, 1, 0, 1};
        
        
        maze_runner(mdaze, N*N);     
        return 0;





}


