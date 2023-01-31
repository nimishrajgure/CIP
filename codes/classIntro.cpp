//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// CollegeCourse Class 
class CollegeCourse

{

    //your code here

    // member variables:

    private:

        string courseId;

        int gradepoint;

        char grade;

        int credits;

        float result = 0; // to store honor points

        

    public:

        // setters:

        void set_CourseId(string CID){

            courseId = CID;

        }

        

        void set_Grade(char g){

            grade = g;

        }

        

        void set_Credit(int cr){

            credits = cr;

        }

        

        

        // getters:

        int calculateGradePoints(char g){

            switch(g){ // switch statement to set gradepoint

                case 'A':

                case 'a':

                    gradepoint = 10;

                    break;

                

                case 'B':

                case 'b':

                    gradepoint = 9;

                    break;

                    

                case 'C':

                case 'c':

                    gradepoint = 8;

                    break;

                    

                case 'D':

                case 'd':

                    gradepoint = 7;

                    break;

                    

                case 'E':

                case 'e':

                    gradepoint = 6;

                    break;

                    

                case 'F':

                case 'f':

                    gradepoint = 5;

                    break;

            }

            

            return gradepoint;

        }

        

        float calculateHonorPoints(int gp,int cr){

            result = (gradepoint * credits);

            return result;

        }

        

        // displays gradepoint and result

        void display(){

            cout << gradepoint << " " << result << endl;

        }

        

    

    

};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    CollegeCourse cc;
    string courseId;
    int gp;
    char grade;
    int credits;
    cin>>courseId>>grade>>credits;
    cc.set_CourseId(courseId);
    cc.set_Grade(grade);
    cc.set_Credit(credits);
    gp=cc.calculateGradePoints(grade);
    cc.calculateHonorPoints(gp,credits);
    cc.display();
    }
    return 0;
}

// } Driver Code Ends
