unordered_map<char, int> map;
for (int i = 0; i < order.size(); i++) {
map[order[i]] = i;
}
for (int i = 1; i < words.size(); i++) {
string w1 = words[i - 1], w2 = words[i];
int j = 0;
int mini=min(w1.size(),w2.size());
for(int j=0;j<mini;j++){
if(mini!=w1.size() && mini==w2.size()&&) return false;
if (j > w1.size()||j > w2.size()|| map[w1[j]] > map[w2[j]]) return false;
if( map[w1[j]] < map[w2[j]])
break;
}
}
unordered_map<char,int> alpha;
for (int i = 0; i < O.size(); i++)
alpha[O[i]] = i;
for (int i = 1; i < W.size(); i++) {
string a = W[i-1], b = W[i];
for (int j = 0; j < a.size(); j++) {
if (j == b.size()) return false;
char achar = a[j], bchar = b[j];
if (alpha[achar] < alpha[bchar]) break;
if (alpha[achar] > alpha[bchar]) return false;
}
}
return true;
return true;