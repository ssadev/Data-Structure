int partition(int data[], int start, int end)
// {
//     int pivot = data[end];
//     int i = start-1;

//   for (int j = start; j < end; j++){
//     if (data[j] <= pivot)
//     {
//       i++;
//       swap(&data[i], &data[j]);
//     }
//   }
//   swap(&data[i + 1], &data[end]);
//   return (i + 1);

// }