
vector<int> gradingStudents(vector<int> grades) {
    for(size_t i = 0; i < grades.size();i++){
        // if (grades[i] < 38){
        // return grades;
        // }
    
     if(grades[i] >= 38){
        int next_mul = grades[i] + (5 - grades[i] % 5);
        if(next_mul - grades[i] < 3){
            grades[i] = next_mul;
        }
    }

    }
    return grades;
    }