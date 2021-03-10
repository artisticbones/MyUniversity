/**
 * Author@ Cheng Feitian
 * Date: 2020-3-2
 * Description: 输入一个表达式（用字符串表示），求这个表达式的值。
 * 保证字符串中的有效字符包括[‘0’-‘9’],‘+’,‘-’, ‘*’,‘/’ ,‘(’， ‘)’,‘[’, ‘]’,‘{’ ,‘}’。且表达式一定合法。
 * Input Format: 输入一个算术表达式
 * Output Format: 得到计算结果
 */


// const string mp = "+-*/)]}";    

// //当前运算符与符号栈的栈顶运算符做优先级比较，如果当前比较优先级高，则不做运算压入栈中，相同进行运算
// bool cmp(char *c1,char *c2){
//     bool flag;
//     if (*c1 == '(')
//     {
//         flag = false;
//     }else if ((*c1 == '+' || *c1 == '-') && (*c2 == '*' || *c2 == '/'))
//     {
//         flag = false;
//     }else
//     {
//         flag = true;
//     }
//     return flag;
// }

// void doCal(stack<double> &st, stack<char> &so){
//     double b = st.top();
//     st.pop();
//     double a = st.top();
//     st.pop();
//     char operator = so.top();
//     so.pop();
//     switch (operator)
//     {
//     case '+':
//         a = a + b;
//         break;
//     case '-':
//         a = a - b;
//         break;
//     case '*':
//         a = a * b;
//         break;
//     case '/':
//         a = a / b;
//         break;
//     default:
//         break;
//     }
//     st.push(a);   
// }

// #include<iostream>
// #include<string>
// #include<stack>

// using namespace std;

// //把大括号和中括号换成小括号，以便减少后期过多的判断
// string change_str(string str) {
//     for(int i = 0; i < str.size(); i++) {
//         if(str[i] == '[' || str[i] == '{')
//             str[i] = '(';
//         if(str[i] == ']' || str[i] == '}')
//             str[i] = ')';
//     }
//     return str;
// }

// // 四则运算
// int calculate(int a, int b, char sym) {
//     int result = 0;
//     switch(sym) {
//         case '+': result = a+b; break;
//         case '-': result = a-b; break;
//         case '*': result = a*b; break;
//         case '/': result = a/b; break;
//     }
//     return result;
// }

// int min_to_post(string str) {
//     int flag = 0; // 正负号标志，0为无正负号，1为正号，2为负号
    
//     stack<int> str_post; // 数字栈
//     stack<char> symbol; // 符号栈
    
//     for(int i = 0; i < str.size(); i++) {
        
//         if(isdigit(str[i])) { // 为数字时,需要看看这个数字是多少
//             int j = i, num = 0;
//             while(i + 1 < str.size() && isdigit(str[i+1])) i++;
//             string str_num = str.substr(j, i - j + 1); // 字符串的数字
//             for(int k = 0; k < str_num.size(); k++) {
//                 num = num * 10 + str_num[k] - '0';
//             } // 取出了这个数字
//             if(flag == 2) // 如果是负数，这把字符串转成的数字变成负数
//                 num = 0 - num;
//             str_post.push(num); // 数字入栈
//         }
        
//         else if(str[i] == '*' || str[i] == '/' || str[i] == '(') { // 如果为乘号或者除号时，入栈
//             symbol.push(str[i]);
//         }
        
//         else if(str[i] == '+' || str[i] == '-') { // 如果为加号或者减号
            
//             if(i == 0 || str[i-1] == '(') { // 先处理负号
//                 if(str[i] == '+')
//                     flag = 1;
//                 else
//                     flag = 2;
//             }
            
//             while(!flag && !symbol.empty() && symbol.top() != '(') { // 堆栈非空时，符号栈弹出符号，并结合数字栈计算
//                 int b = 0, a = 0;
//                 char sym_temp;
//                 b = str_post.top();
//                 str_post.pop();
//                 a = str_post.top();
//                 str_post.pop();
//                 sym_temp = symbol.top();
//                 symbol.pop();
                
//                 str_post.push(calculate(a, b, sym_temp));
//             }
            
//             if(!flag) // 如果这个是加减不是正负号
//                 symbol.push(str[i]);
//         }
        
//         else if(str[i] == ')') { // 如果为右括号
//             while(symbol.top() != '(') {
//                 int b = 0, a = 0;
//                 char sym_temp;
//                 b = str_post.top();
//                 str_post.pop();
//                 a = str_post.top();
//                 str_post.pop();
//                 sym_temp = symbol.top();
//                 symbol.pop();
//                 str_post.push(calculate(a, b, sym_temp));
//             }
//             symbol.pop(); // 弹出左括号
//         }
        
//         else
//             cout << "error" << endl;
//     }
    
//     while(!symbol.empty()) { // 循环结束之后，把剩下的符号弹出，并结合数字栈计算
//         int b = 0, a = 0;
//         char sym_temp;
//         b = str_post.top();
//         str_post.pop();
//         a = str_post.top();
//         str_post.pop();
//         sym_temp = symbol.top();
//         symbol.pop();
//         str_post.push(calculate(a, b, sym_temp)); // 计算结果入栈
//     }
    
//     return str_post.top();
// }

// int main() {
//     string str;
//     while(cin >> str) {
//         str = change_str(str);
//         int result = min_to_post(str);
//         cout << result << endl;
//     }
//     return 0;
// }

/*
2020-12-23-v1
*/

#include<iostream>
#include<string>
#include<stack>

using namespace std;

// 将所有括号都转为()
string convertSTR(string str) {
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '[' || str[i] == '}')
            str[i] = '(';
        if(str[i] == ']' || str[i] == '}')
            str[i] = ')';
    }
    return str;
}

int compute(int a, int b, char opera) {
    int result = 0;
    switch(opera) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
    }
    return result;
}

int computing(string str) {
    int flag = 0; // 用来记录正负号，0表示无符号，1表示正好，2表示负号
    stack<int> nums;
    stack<char> operas;
    for(int i = 0; i < str.size(); i++) {
        if(isdigit(str[i])) {
            // 如果当前位为数字，需要看看这个数字变成int有多大，正负号的问题，等到了+-的时候处理
            int j = i, num = 0;
            // 这里需要一个循环依次往后判断
            while(i+1 < str.size() && isdigit(str[i+1])) i++; // 这里使用i++目的也是为了改变这个大循环
            // 找到这个数字的最后一位之后，要把这个字符串转变为数字
            string str_num = str.substr(j, i-j+1);
            for(int k = 0; k < str_num.size(); k++)
                num = num * 10 + str_num[k] - '0';
            if(flag == 2)
                num = 0 - num;
            flag = 0; // 使用完毕这个数字正负号之后归为0
            // 把这个数字放到数字栈
            nums.push(num);
        }
        else if(str[i] == '*' || str[i] == '/' || str[i] == '(') {
            // 直接放到符号栈
            operas.push(str[i]);
        }
        else if(str[i] == '+' || str[i] == '-') {
            // 先要判断是不是数字的正负号
            if(i == 0 || str[i-1] == '(') {
                if(str[i] == '+')
                    flag = 1;
                else
                    flag = 2;
            }
            // 遇到加减号的时候，先进行计算，保证其他乘除号的优先级
            while(flag == 0 && !operas.empty() && operas.top() != '(') { // 进行计算的三个条件
                // 堆栈非空时，符号栈弹出符号，并结合数字栈计算
                int b = nums.top();
                nums.pop();
                int a = nums.top();
                nums.pop();
                char opera = operas.top();
                operas.pop();
                nums.push(compute(a, b, opera));
            }
            // 然后把这个加减号放入符号栈（如果这个是加减号不是正负号的话）
            if(flag == 0)
                operas.push(str[i]);
        }
        else if(str[i] == ')') {
            // 一直计算，直到计算到左括号
            while(operas.top() != '(') {
                int b = nums.top();
                nums.pop();
                int a = nums.top();
                nums.pop();
                char opera = operas.top();
                operas.pop();
                nums.push(compute(a, b, opera));
            }
            // 计算完之后把左括号从符号栈退出
            operas.pop();
        }
    }
    // 最后把符号栈和数字栈中的执行运算，输出结果
    while(!operas.empty()) {
        int b = nums.top();
        nums.pop();
        int a = nums.top();
        nums.pop();
        char opera = operas.top();
        operas.pop();
        nums.push(compute(a, b, opera));
    }
    // 最后返回结果，也就是退出数字栈的仅存的一个元素
    return nums.top();
}

int main() {
    string str;
    while(cin >> str) {
        str = convertSTR(str);
        cout << computing(str) << endl;
    }
    return 0;
}
