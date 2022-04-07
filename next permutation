 def perm(nums):
        n=len(nums)
        i=1
        j=n-1
        while(i!=j):
            if(nums[i]<nums[j]):
                nums[i],nums[j]=nums[j],nums[i]
                nums[i+1:]=nums[n-1:i:-1]
                break    
        else:
            for i in range(n-1,0,-1):
                if(nums[i]>nums[0]):
                    ele=nums[i]
                    nums.sort()
                    nums.remove(ele)
                    nums.insert(0,ele)
                    break
                    
            else:
                nums.sort()
         return nums
 nums=[1,2,3]
 print(perm(nums))
 #output:1 3 2
        
