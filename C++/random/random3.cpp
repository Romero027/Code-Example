 //The following program computes
  //the probability for dice possibilities
  #include  <iostream>
  #include  <random>
  #include  <ctime>
  using namespace std;
  const int sides = 6;
  int main(void)
  {
     const int   n_dice = 2;
     double lower_bound = 1.0;
   	 double upper_bound = 10.0;
   std::uniform_real_distribution<double> unif(lower_bound,upper_bound);
   std::default_random_engine re(time(0));
   double a_random_double;
   for(int i=0;i<10;i++){
  	 	a_random_double = unif(re);
   		cout<<a_random_double<<endl;
   }
		
   return 0;
}