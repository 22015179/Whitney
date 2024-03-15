#include <iostream>

using namespace std;

int main()
{

double heightInches , distanceFeet , distanceInches , angleDegrees;

cout << "Enter height of your eye (in intches)" ;
cin >> heightInches;

cout << "Enter the distance to the tree (in feet and inches , separete by a space";
cin >> distanceFeet >> distanceInches;

cout << "Enter the angle (in degrees form)";
cin >> angleDegrees;

double distanceTotalInches = distanceFeet* 12 + distanceInches;

double angelRadian = angleDegrees * m_PI /180.0;
double treeHeightFeet = (heightInches + distanceTotalInches * tan(angle_radiand))/12.0;

cout<< "The height of the tree is" << treeHeightFeet <<"feet "<< endl
   return 0;
}
