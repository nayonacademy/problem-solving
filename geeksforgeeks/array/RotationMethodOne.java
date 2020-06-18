class RotationMethodOne{
    public static void main(String[] args){
        // initialize the array
        int []arr = new int []{1,2,3,4,5,6,7,8};
        int n = 3;
        // Display the original array
        System.out.println("Oritinal array: ");
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
        // Rotate the given array by n times toward left
        for(int i = 0; i < n; i++){
            int j, first;
            first = arr[0];
            for(j=0;j<arr.length-1;j++){
                arr[j] = arr[j+1];
            }
            arr[j] = first;
        }
        System.out.println();

        // Display resulting array after rotation
        System.out.println("Array after left rotation");
        for(int i = 0;i<arr.length;i++){
            System.out.print(arr[i] + " ");
        }
    }

}