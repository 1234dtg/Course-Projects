#include <simplecpp>
/*
Marking Scheme:
1: Quizzes  (2x5 = 10)  best 5 of 6
2: Labs     (2x5 = 10)  best 5 of 7
3: Midsem   (30)
4: Endsem   (40)
5: Project  (pass / nopass)
Threshold for project to be considered is 80 marks (AB grade cutoff)
*/
// Function declarations
bool lab_marks(int &total_marks);
bool quiz_marks(int &total_marks);
int midsem_marks();
int endsem_marks();
bool project_marks(int &total_marks);
int calculate_grade(int total_marks, bool plag_in_quiz, bool plag_in_lab, bool plag_in_project);
bool lab_marks(int &total_marks)
{
    int a, b, c, d, e, f, g, plag;
    cin >> a >> b >> c >> d >> e >> f >> g >> plag;
    // int min_marks = min(min(min(min(min(a, b), c), d), e), f);
    int min1, min2;
    // check among a, b
    if (a < b)
    {
        min1 = a;
        min2 = b;
    }
    else
    {
        min1 = b;
        min2 = a;
    }
    // compare min1, min2 with c
    if (c < min1)
    {
        min2 = min1;
        min1 = c;
    }
    else if (c < min2)
    {
        min2 = c;
    }
    // compare min1, min2 with d
    if (d < min1)
    {
        min2 = min1;
        min1 = d;
    }
    else if (d < min2)
    {
        min2 = d;
    }
    // compare min1, min2 with e
    if (e < min1)
    {
        min2 = min1;
        min1 = e;
    }
    else if (e < min2)
    {
        min2 = e;
    }
    // compare min1, min2 with f
    if (f < min1)
    {
        min2 = min1;
        min1 = f;
    }
    else if (f < min2)
    {
        min2 = f;
    }
    // compare min1, min2 with g
    if (g < min1)
    {
        min2 = min1;
        min1 = g;
    }
    else if (g < min2)
    {
        min2 = g;
    }
    total_marks += a + b + c + d + e + f + g - min1 - min2; // best 5 of 7
    if (plag == 1)
        return true;
    return false;
}
bool quiz_marks(int &total_marks)
{
    int a, b, c, d, e, f, plag;
    cin >> a >> b >> c >> d >> e >> f >> plag;
    int min_marks = min(min(min(min(min(a, b), c), d), e), f);
    total_marks += a + b + c + d + e + f - min_marks; // best 5 of 6
    if (plag == 1)
        return true;
    return false;
}
int midsem_marks()
{
    int score;
    cin >> score;
    return score;
}
int endsem_marks()
{
    int score;
    cin >> score;
    return score;
}
bool project_marks(int &total_marks)
{
    int score, plag;
    cin >> score >> plag;
    if (total_marks > 80 && score == 10)
        total_marks += 10;
    if (plag == 1)
        return true;
    return false;
}
int calculate_grade(int total_marks, bool plag_in_quiz, bool plag_in_lab, bool plag_in_project)
{
    int grade;
    // grade = (total_marks + 9) / 10;
    if (total_marks > 90)
    {
        grade = 10;
    }
    else if (total_marks > 80)
    {
        grade = 9;
    }
    else if (total_marks > 70)
    {
        grade = 8;
    }
    else if (total_marks > 60)
    {
        grade = 7;
    }
    else if (total_marks > 50)
    {
        grade = 6;
    }
    else if (total_marks > 40)
    {
        grade = 5;
    }
    else if (total_marks > 30)
    {
        grade = 4;
    }
    else
    {
        grade = 0;
    }
    if (plag_in_quiz)
        grade -= 1;
    if (plag_in_lab)
        grade -= 1;
    if (plag_in_project)
        grade -= 1;
    if (grade < 4)
        grade = 0;
    return grade;
}
main_program
{
    int total_marks = 0;
    bool plag_in_lab = lab_marks(total_marks);
    bool plag_in_quiz = quiz_marks(total_marks);
    total_marks += midsem_marks();
    total_marks += endsem_marks();
    bool plag_in_project = project_marks(total_marks);
    int grade = calculate_grade(total_marks, plag_in_quiz, plag_in_lab, plag_in_project);
    cout << grade << endl;
}