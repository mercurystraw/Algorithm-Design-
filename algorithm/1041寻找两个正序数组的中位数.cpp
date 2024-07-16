//#include <iostream>
//#include <climits> // ���� INT_MAX ���ͷ�ļ�
//#include <algorithm> // ���� min ����
//#include <iomanip>
//using namespace std;
//
//int* nums1, * nums2;
//int n, m;
//
//// ��������
//double findMedianSortedArrays(int* nums1, int n, int* nums2, int m);
//int findKth(int* nums1, int i, int n, int* nums2, int j, int m, int k);
//
//int main() {
//    int nums;
//    cin >> nums;
//
//    while (nums--) {
//        cin >> n >> m;
//        // �����ڴ�
//        nums1 = new int[n];
//        nums2 = new int[m];
//
//        // ��ȡ����Ԫ��
//        for (int i = 0; i < n; i++) cin >> nums1[i];
//        for (int i = 0; i < m; i++) cin >> nums2[i];
//
//        // ���㲢�����λ��
//        cout << findMedianSortedArrays(nums1, n, nums2, m) << endl;
//
//        // �ͷ��ڴ�
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
//        // ������Ԫ�أ������м�Ԫ��
//        return findKth(nums1, 0, n, nums2, 0, m, total / 2 + 1);
//    }
//    else {
//        // ż����Ԫ�أ������м�����Ԫ�ص�ƽ��ֵ
//        return (findKth(nums1, 0, n, nums2, 0, m, total / 2) + findKth(nums1, 0, n, nums2, 0, m, total / 2 + 1)) / 2.0;
//        //i��jΪ�����������ʼλ��
//    }
//}
//
//int findKth(int* nums1, int i, int n, int* nums2, int j, int m, int k) {
//    // ȷ�� nums1 �ǽ϶̵�����
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

//�鲢����Ҳ��AC ��������������鲢ΪO��n+m�� �������ΪO��nlogn�� ��sort������Ҫnlogn
// ����Ϊ�鲢����
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


