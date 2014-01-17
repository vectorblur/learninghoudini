string file = ch("filepath");
float radius = ch("radius");
int maxpoint = ch("maxpoint"); //max of points to look for
//s@name = file;
//f@radius=ch("radius");
//i@maxpoint = ch("maxpoint");
//declare
int result;
int hasfound;
//pc open
result = pcopen(file,"P",P,radius,maxpoint);
//i@result;
int bool = 1;
while (bool ==1)
{
    hasfound = pciterate(result);
    if(hasfound !=0)
    {
     //addgroup("myGrp",ptnum); function not available in CVEX
     @Cd=set(0,1,0);          
    }
bool = hasfound;
}
