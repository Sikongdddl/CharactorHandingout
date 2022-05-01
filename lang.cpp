#include <iostream>
#include <ctime>

int main()
{
    unsigned seed = time(0) +1;
    srand(seed);
    int tag[12] = {0};

    for(int i = 0; i<12; i++)
    {
        int charac = rand() % 12;
        if(tag[charac]==0)
        {
            std::cout<<i+1<<"号玩家的角色是";
            switch(charac)
            {
                case 0:case 1:case 2:case 3:
                std::cout<<"平民"<<std::endl;
                break;
                case 4:
                std::cout<<"预言家"<<std::endl;
                break;
                case 5:
                std::cout<<"女巫"<<std::endl;
                break;
                case 6:
                std::cout<<"守卫"<<std::endl;
                break;
                case 7:
                std::cout<<"骑士"<<std::endl;
                break;
                case 8:
                std::cout<<"白狼王"<<std::endl;
                break;
                case 9:case 10:case 11:
                std::cout<<"狼人"<<std::endl;
                break;
            }
            tag[charac]=1;
        }
        else if(tag[charac]==1)
        {
            i--;
            continue;
        }
    }
    return 0;
}