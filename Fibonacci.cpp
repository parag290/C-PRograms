/* To find nth number in fibonacci series
1,1,2,3,5,6,13,21.....

*/

int fibonacci(int n) {                
    n = n-1;  
    
    int a = 1, b = 1;
    while (n--){
        b = a+b;
        a = b -a;      
    }        
    return a;
}
