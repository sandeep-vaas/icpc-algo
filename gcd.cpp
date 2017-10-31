// Recursive function to return gcd of a and b
int gcd(int a, int b)
{ 
    //Base cases
    if (a == 0 || b == 0)
       return 0;
    if (a == b)
        return a;
 
    //Recursion   
    if (a > b)
        return gcd(a-b, b);
    else
	return gcd(a, b-a);
}