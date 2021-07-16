/*
   Code By Kashif Raza, feel free to check but remember 
   to do or solve on your own. 
   Never consider this as a tool to increase your stars (Badges) without learning
*/
void countApplesAndOranges(int& s, int& t, int& a, int& b, vector<int>& apples, vector<int>& oranges) {
  //Initiate with Zero Count
    int countApples = 0, countOranges = 0;
  //looping through Array of m apples and checking if their distance from Apple 
  //tree lies within the Sam's House i.e. s->t or you can also use (s-t) dA = Distance from Apple Tree
    for (int& dA : apples)
        if (dA + a >= s && dA + a <= t) countApples++;
  //looping through Array of n orangess and checking if their distance from Orange 
  //tree lies within the Sam's House i.e. t->s dO = Distance from Orange Tree 
    for (int& dO : oranges)
        if (dO + b <= t && dO + b >= s) countOranges++;
//   Print the counts!
    cout << countApples << '\n' << countOranges << endl;
}
