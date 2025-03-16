
cmake:
	/usr/share/cmake-3.29.3/bin/cmake -B build
	/usr/share/cmake-3.29.3/bin/cmake --build build

#cache size (for example:1,2,4,8,16,32,64...2^18)B
CacheSize 		= 8
#cacheline size (for example:1,2,4,8,16,32,64...2^18)Unit:Byte
CacheLineSize 	= 16
#directive_mapped 1 set_associative 2 full_associative 3
MappingMethod 	= 2
#lines in each set (for example:1,2,4,8,16,32,64...2^18)
LineCountEachSet= 4
# replacement policy
# FIFO(First In First Out):1
# LRU(Least Recently Used):2
# LFU(Least Frequently Used):3
# Random:4
ReplacePolicy 	= 4
# write policy
# Write through:1
# Write back:2
WritePolicy     = 1
# FilePath	    =/home/jimple/Documents/ysyx/CacheSim/soc_train.trace
# FilePath	    = /home/jimple/Documents/ysyx/CacheSim/soc_test.trace
FilePath	    =/home/jimple/Documents/ysyx/CacheSim/soc_train_dcache.trace

# ARGS := 
# ARGS += $(CacheSize)
# ARGS += $(CacheLineSize)
# ARGS += $(MappingMethod)
# ARGS += $(LineCountEachSet)
# ARGS += $(ReplacePolicy)
# ARGS += $(WritePolicy)
# ARGS += $(FilePath)

# CacheSize_RANGE 	:= 16 32 64 128 256 512 1024
# CacheLineSize_RANGE := 8 16 32 64 128 256 512 1024
# CacheSize_RANGE 	:= 128 256 512 1024 2048
CacheSize_RANGE 	:= 128 256 512 1024 2048 4096
# CacheLineSize_RANGE := 16
ReplacePolicy_RANGE := 1 2 3 4
Set := 4
run-one:
	./build/BranchSim $(ARGUMENTS)

run:
	$(foreach i,$(CacheSize_RANGE),\
		$(foreach j,$(ReplacePolicy_RANGE),\
			$(eval ARGS :=)\
			$(eval ARGS += $(i))\
			$(eval ARGS += $(CacheLineSize))\
			$(eval ARGS += $(MappingMethod))\
			$(eval ARGS += $(shell echo $(i) / $(Set) / $(CacheLineSize) | bc))\
			$(eval ARGS += $(j))\
			$(eval ARGS += $(WritePolicy))\
			$(eval ARGS += $(FilePath))\
			$(MAKE) run-one ARGUMENTS="$(ARGS)" > ./log/CSize$(i)_POLICY_$(j)_SET$(Set).txt &\
		)\
	)

log:
	$(foreach i,$(CacheSize_RANGE),\
		$(foreach j,$(ReplacePolicy_RANGE),\
			$(shell cat ./log/CSize$(i)_POLICY_$(j)_SET$(Set).txt | grep "Average cache hit rate:")
		)\
	)