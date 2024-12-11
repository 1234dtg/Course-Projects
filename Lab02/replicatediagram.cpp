#include <simplecpp>

main_program{
   turtleSim();

   right(-60);
   repeat(3){
       forward(100);
       right(120);
   }
   right(150); forward(150);
   left(90); forward(100);
   left(90); forward(150);
   wait(5);
}
