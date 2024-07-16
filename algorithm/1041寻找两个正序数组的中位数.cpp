//#include <iostream>
//#include <climits> // 包含 INT_MAX 宏的头文件
//#include <algorithm> // 包含 min 函数
//#include <iomanip>
//using namespace std;
//
//int* nums1, * nums2;
//int n, m;
//
//// 函数声明
//double findMedianSortedArrays(int* nums1, int n, int* nums2, int m);
//int findKth(int* nums1, int i, int n, int* nums2, int j, int m, int k);
//
//int main() {
//    int nums;
//    cin >> nums;
//
//    while (nums--) {
//        cin >> n >> m;
//        // 分配内存
//        nums1 = new int[n];
//        nums2 = new int[m];
//
//        // 读取数组元素
//        for (int i = 0; i < n; i++) cin >> nums1[i];
//        for (int i = 0; i < m; i++) cin >> nums2[i];
//
//        // 计算并输出中位数
//        cout << findMedianSortedArrays(nums1, n, nums2, m) << endl;
//
//        // 释放内存
//        delete[] nums1;
//        delete[] nums2;
//    }
//
//    return 0;
//}
//
//double findMedianSortedArrays(int* nums1, int n, int* nums2, int m) {
//    int total = n + m;
//    if (total % 2 == 1) {
//        // 奇数个元素，返回中间元素
//        return findKth(nums1, 0, n, nums2, 0, m, total / 2 + 1);
//    }
//    else {
//        // 偶数个元素，返回中间两个元素的平均值
//        return (findKth(nums1, 0, n, nums2, 0, m, total / 2) + findKth(nums1, 0, n, nums2, 0, m, total / 2 + 1)) / 2.0;
//        //i，j为两个数组的起始位置
//    }
//}
//
//int findKth(int* nums1, int i, int n, int* nums2, int j, int m, int k) {
//    // 确保 nums1 是较短的数组
//    if (n > m) return findKth(nums2, j, m, nums1, i, n, k);
//    if (n == 0) return nums2[j + k - 1];
//    if (k == 1) return min(nums1[i], nums2[j]);
//
//    int part1 = min(k / 2, n), part2 = k - part1;
//    if (nums1[i + part1 - 1] < nums2[j + part2 - 1]) {
//        return findKth(nums1, i + part1, n - part1, nums2, j, m, k - part1);
//    }
//    else {
//        return findKth(nums1, i, n, nums2, j + part2, m - part2, k - part2);
//    }
//}

//归并排序也能AC 对两个有序数组归并为O（n+m） 对无序的为O（nlogn） 而sort排序需要nlogn
// 以下为归并排序
//#include<iostream>
//#include <iomanip>
//using namespace std;
//int nums, n, m;
//int main()
//{
//	cin >> nums;
//	for (int i = 0; i < nums; i++)
//	{
//		cin >> n >> m;
//		double* nums1 = new double[n], * nums2 = new double[m];
//		for (int j = 0; j < n; j++)
//			cin >> nums1[j];
//		for (int j = 0; j < m; j++)
//			cin >> nums2[j];
//		int p1 = 0, p2 = 0, k = 0;
//		double key;
//		double* num = new double[m + n];
//		while (p1 <= n - 1 && p2 <= m - 1)
//		{
//			if (nums1[p1] < nums2[p2]) { num[k] = nums1[p1]; p1++; }
//			else { num[k] = nums2[p2]; p2++; }
//			k++;
//		}
//		while (p1 <= n - 1)
//		{
//			num[k] = nums1[p1]; k++; p1++;
//		}
//		while (p2 <= m - 1)
//		{
//			num[k] = nums2[p2]; k++; p2++;
//		}
//		if ((m + n) % 2 == 0)
//			key = (num[(m + n) / 2 - 1] + num[(m + n) / 2]) / 2.0;
//		else
//			key = num[(m + n) / 2];
//		cout << key << endl;
//		//cout <<fixed<<setprecision(5)<< key << endl;
//	}
//	return 0;
//}


