.PHONY: clean All

All:
	@echo "----------Building project:[ DENcrypt - Release ]----------"
	@cd "DENcrypt" && "$(MAKE)" -f  "DENcrypt.mk"
clean:
	@echo "----------Cleaning project:[ DENcrypt - Release ]----------"
	@cd "DENcrypt" && "$(MAKE)" -f  "DENcrypt.mk" clean
