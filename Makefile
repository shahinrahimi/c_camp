.PHONY: create_project

PROJECT_NAME = $(name)
BASE_DIR = $(shell pwd)/$(PROJECT_NAME)


create_project:
	@if [ -z "$(PROJECT_NAME)" ]; then \
		echo "Error: Please specify a project name using 'make create_project name=<project_name>'"; \
		exit 1; \
	fi
	
	@if [ -d "$(BASE_DIR)" ]; then \
		echo "Error: Directory '$(PROJECT_NAME)' already exists!"; \
		exit 1; \
	fi

	
	@echo "Creating project structure for '$(PROJECT_NAME)'..."
	@mkdir -p "$(BASE_DIR)/src" "$(BASE_DIR)/include" "$(BASE_DIR)/bin" "$(BASE_DIR)/build" 
	@echo "# $(PROJECT_NAME)" > "$(BASE_DIR)/README.md"
	@echo '#include <stdio.h>\n\nint main() {\n\tprintf("Your project [$(PROJECT_NAME)] creatd!");\n\treturn 0;\n}' > "$(BASE_DIR)/src/main.c"

	@echo "Generating gitignore file..."
	@echo "bin/*\nnode_modules\n" > "$(BASE_DIR)/.gitignore"
	@echo "Project '$(PROJECT_NAME)' created successfully!"
	
	

