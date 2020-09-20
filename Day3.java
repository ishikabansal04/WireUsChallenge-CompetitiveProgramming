import java.util.*;

public class Day3{
    public static void main(String[]args){
        int[] height={1, 4, 3, 7, 1, 3, 6};
        largestArea(height);
    }
    
    public static void largestArea(int[] height) {
        int maxArea = 0;

        Stack<Integer> st = new Stack<>();

        int i=0;
        for (i = 0; i < height.length; i++) {
            if (st.size() == 0 || height[st.peek()] <= height[i])   //sometimes this gives error bound of exception at index -1 ....so do st.size!=1
                st.push(i);
            else {
                while (st.size() != 0 && height[st.peek()] >= height[i]) {   //sometimes this gives error bound of exception at index -1 ....so do st.size!=1
                    int idx = st.pop();
                    int he = height[idx];
                    int width = i - (st.size() == 0 ? -1 : st.peek()) -1;  // coz we consider one prev index 
                    int currArea = he * width;

                    maxArea = Math.max(maxArea, currArea);
                }
                st.push(i);
            }
        }

        while (st.size() != 0) { //sometimes this gives error bound of exception at index -1 ....so do st.size!=1
            int idx = st.pop();
            int he = height[idx];
            int width = i-(st.size() == 0 ? -1 : st.peek()) -1 ;
            int currArea = he * width;

            maxArea = Math.max(maxArea, currArea);
        }
        System.out.println(maxArea);
    }

}