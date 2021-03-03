.PHONY: clean All

All:
	@echo "----------Building project:[ DENcrypt - Debug ]----------"
	@cd "DENcrypt" && "$(MAKE)" -f  "DENcrypt.mk"
clean:
	@echo "----------Cleaning project:[ DENcrypt - Debug ]----------"
	@cd "DENcrypt" && "$(MAKE)" -f  "DENcrypt.mk" clean
