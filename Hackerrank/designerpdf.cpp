int designerPdfViewer(vector<int> h, string word) {
    int n = h.size();
    for(int i = 0; i < n; i++){
        h[i] = 'a';
        for(int j = 0; j < word.size(); j++){
        int largest = max(largest, word[j]);
        int area = largest*h[i];
    }
    }
    return area;
}