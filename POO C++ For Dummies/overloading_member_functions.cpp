class Student{
public:
    double grade(); // return Student's grade
    double grade(double dNewGPA); // set Student's grade
};

class Hill{
public:
    double grade(double dSlope); // set the slope
};
 
    void grade(double);

void fn(){
    Student s;
    Hill h;
    // set the student's grade
    s.grade(3.0);
    // now query the grade
    double dGPA = s.grade();
    // now grade a hill to 3 degrees slope
    h.grade(3.0);
    // call the non-member function
    grade(3.0);
}