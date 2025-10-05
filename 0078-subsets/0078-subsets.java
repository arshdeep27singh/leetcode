class Solution {

    private void backtrack(int index, List<Integer> current, List<List<Integer>> result, int[]nums, int size){
        if(index == size){
            result.add(new ArrayList<>(current));
            return;
        }

        // not take value
        backtrack(index + 1, current, result, nums, size);
        // take value
        current.add(nums[index]);
        backtrack(index + 1, current, result, nums, size);
        current.remove(current.size() - 1);
    }

    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> current = new ArrayList<>();
        backtrack(0, current, result, nums, nums.length);
        return result;
    }
}