/*
    Name: Mohammad Yesaullah Sheikh
    Roll no: 23k-0019
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
//#include <string>
using namespace std;

class Image{
    int width;
    int height;
    int* imagedata;
    public:
    int i;
    // parameterized constructor
    Image(int width, int height, int data[], int size) {
        this->height = height;
        this->width = width;
        imagedata = new int(size); 
        for(i=0; i<size; i++){
            imagedata[i] = data[i];
        }
    }
    // copy constructor
    Image(const Image& original){
        width = original.width;
        height = original.height;
        int size;
        size = original.height*original.width;
        imagedata = new int(size);
        for(i=0; i<size; i++){
            imagedata[i] = original.imagedata[i];
        }
    }
    // function to update the image data
    void UpdateData(){
        srand(time(0));
        int size;
        size = height*width;
        for(i=0; i<size; i++){
            if (imagedata[i] <= 0) {
                imagedata[i] = rand() % 255 + 1;
            }
        }
    }
    // destructor
    ~Image(){
        delete[] imagedata;
    }
    // display method
    void display(){
        cout<<"Width: "<<width<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Image Data: "<<endl;
        for(i=0; i<height*width; i++){
            cout<<imagedata[i]<<" ";
        }
    }
};

int main(){
    int data[] = {50, 100, 200, 150, 0, -100};

    // this will hold the size of the data array
    int size = sizeof(data)/sizeof(data[0]);

    // Create an image object
    Image i1(2, 3, data, size);

    cout<<"Displaying Original Image: "<<endl;
    i1.display();

    // making another object using copy constructor
    Image i2 = i1;

    // displaying the copied image 
    cout<<"\n\nDisplaying Copied Image: "<<endl;
    i2.display();

    // updating the data of each image object
    i1.UpdateData();
    i2.UpdateData();

    // displaying  the updated images
    cout<<"\n\nImage 1 After Update: "<<endl;
    i1.display();

    cout<<"\n\nImage 2 After Update: "<<endl;
    i2.display();

}










