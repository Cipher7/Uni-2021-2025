import java.util.Random;
import java.util.Scanner;

public class MergeSort {
    private static int[] arr;
    private static int[] temp;

    public MergeSort(int n) {
        arr = new int[n];
        temp = new int[n];
    }

    public static void swap(int a, int b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    public static void simpleMerge(int low, int mid, int high) {
        int i = low, j = mid + 1, k = low;

        while (i <= mid && j <= high) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
            }
        }

        while (i <= mid) {
            temp[k++] = arr[i++];
        }

        while (j <= high) {
            temp[k++] = arr[j++];
        }

        for (k = low; k <= high; k++) {
            arr[k] = temp[k];
        }
    }

    public static void msort(int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;
            msort(low, mid);
            msort(mid + 1, high);
            simpleMerge(low, mid, high);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter choice: ");
        int choice = sc.nextInt();
        System.out.println("Enter length: ");
        int n = sc.nextInt();
        MergeSort ob = new MergeSort(n);

        if (choice == 1) {
            for (int i = 0; i < n; i++)
                arr[i] = i;
        } else if (choice == 2) {
            for (int i = 0; i < n; i++)
                arr[i] = n - i;
        } else {
            Random r = new Random();
            for (int i = 0; i < n; i++) {
                arr[i] = r.nextInt(1000000);
            }
        }

        // Merge Sort
        double st = System.nanoTime();
        msort(0, n - 1);
        double end = System.nanoTime();

        double time = end - st;
        time = time / (Math.pow(10, 6));
        System.out.println("\nTime taken: " + time);

        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
        sc.close();
    }
}
