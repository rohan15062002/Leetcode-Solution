for(int i=1;i<n;i++){
if(s1.top()>nums[i]){
s1.pop();
s1.push(nums[i]);
v1.push_back(s1.top());
}
else{
v1.push_back(s1.top());
}
}
int sum=0;
for(int i=1;i<n-1;i++){
if(v1[i-1]<nums[i] && nums[i]<v[i+1]){
sum+=2;
}
else if(nums[i]>nums[i-1] && nums[i]<nums[i+1]){
sum+=1;
}
else{
continue;
}
}
return sum;
}
};