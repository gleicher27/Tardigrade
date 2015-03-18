TEST_exodiff = \
	@! ./$(APPLICATION_NAME)-$(METHOD) -i $(1) &> /dev/null && \
	! $(FRAMEWORK_DIR)/contrib/exodiff/exodiff -F 1e-8 -t 5.5E-6 $(2) gold/$(2) | grep -q \(different\|ERROR\|command\ not\ found\) && \
	echo $(APPLICATION_NAME) ... FAILED || \
	echo $(APPLICATION_NAME) ... OK
