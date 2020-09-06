#include<iostream>

int main()
{
    int t,green,purple;
    std::cin>>t;

    while(t--){
        int n,sum1=0,sum2=0,a,b;
        std::cin>>green>>purple>>n;
        while(n--){
            std::cin>>a>>b;
            sum1+=a;
            sum2+=b;
        }
        if(green<=purple){
            if(sum1<=sum2){
                std::cout<<sum2*green + sum1*purple<<std::endl;
            }
            else{
                std::cout<<sum1*green + sum2 * purple<<std::endl;
            }
        }
        else{
            if(sum1<=sum2){
                std::cout<<sum2*purple + sum1*green<<std::endl;
            }
            else{
                std::cout<<sum1*purple + sum2 * green<<std::endl;
            }
        }
    }
}
