import java.util.ArrayList;

public class Sorting {

    //// Selection sort
    // Best Time Complexity = Worst Time Complexity= Average Time Complexity =
    // O(N^2)
    /*
     * static void SelectionSort(int arr[], int n) {
     * for (int i = 0; i < n - 1; i++) {
     * int mini = i;
     * 
     * for (int j = i + 1; j < n; j++) {
     * if (arr[j] < arr[mini]) {
     * mini = j;
     * }
     * }
     * // swap
     * int temp = arr[mini];
     * arr[mini] = arr[i];
     * arr[i] = temp;
     * }
     * System.out.println("After Slection Sort");
     * for (int i = 0; i < n; i++) {
     * System.out.println(arr[i] + " ");
     * }
     * 
     * }
     */

    //// Bubble Sort
    // Best Time Complexity =O(N), Worst Time Complexity= Average Time Complexity =
    // O(N^2)
    /*
     * static void Bubble_sort(int arr[], int n) {
     * for (int i = n - 1; i >= 0; i--) {
     * for (int j = 0; j <= i - 1; j++) {
     * if (arr[j] > arr[j + 1]) {
     * int temp = arr[j];
     * arr[j] = arr[j + 1];
     * arr[j + 1] = temp;
     * }
     * }
     * }
     * System.out.println("After Bubble Sort");
     * for (int i = 0; i < n; i++) {
     * System.out.println(arr[i] + " ");
     * }
     * }
     */

    //// Insertion Sort
    // Best Time Complexity =O(N), Worst Time Complexity= Average Time Complexity =
    // O(N^2)

    /*
     * static void Insertion_sort(int arr[], int n) {
     * for (int i = 0; i <= n - 1; i++) {
     * int j = i;
     * while (j > 0 && arr[j - 1] > arr[j]) {
     * int temp = arr[j - 1];
     * arr[j - 1] = arr[j];
     * arr[j] = temp;
     * j--;
     * }
     * }
     * System.out.println("After Insertion Sort");
     * for (int i = 0; i < n; i++) {
     * System.out.println(arr[i] + " ");
     * }
     * }
     */

    //// Merge Sort
    // Best Time Complexity = Worst Time Complexity= Average Time Complexity =
    // O(NlogN)

    /*
     * private static void Merge(int[] arr, int low, int mid, int high) {
     * ArrayList<Integer> temp = new ArrayList<>();
     * int left = low;
     * int right = mid + 1;
     * 
     * while (left <= mid && right <= high) {
     * if (arr[left] <= arr[right]) {
     * temp.add(arr[left]);
     * left++;
     * } else {
     * temp.add(arr[right]);
     * right++;
     * }
     * }
     * // if elements on the left half are still left //
     * 
     * while (left <= mid) {
     * temp.add(arr[left]);
     * left++;
     * }
     * 
     * // if elements on the right half are still left //
     * while (right <= high) {
     * temp.add(arr[right]);
     * right++;
     * }
     * 
     * for (int i = low; i <= high; i++) {
     * arr[i] = temp.get(i - low);
     * }
     * 
     * }
     * 
     * public static void mergersort(int[] arr, int low, int high) {
     * if (low >= high)
     * return;
     * int mid = (low + high) / 2;
     * mergersort(arr, low, mid);
     * mergersort(arr, mid + 1, high);
     * Merge(arr, low, mid, high);
     * 
     * }
     */

    public static void main(String[] args) {
        int arr[] = { 13, 46, 24, 52, 20, 9 };
        int n = arr.length;

        // SelectionSort(arr, n);
        // Bubble_sort(arr, n);
        // Insertion_sort(arr, n);
        // mergersort(arr, 0, n - 1);

        System.out.println("After Sort");
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i] + " ");
        }

    }

}
