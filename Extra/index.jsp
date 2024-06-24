<!DOCTYPE html>
<html>
<head>
<title>Math Operations</title>
</head>
<body>
<h2>Math Operations</h2>
<form action="calculate.jsp" method="post">
<input type="checkbox" name="operation" value="add" checked>Addition
<input type="checkbox" name="operation" value="subtract">Subtraction
<input type="checkbox" name="operation" value="multiply">Multiplication
<input type="checkbox" name="operation" value="divide">Division<br><br>

Enter first number: <input type="text" name="num1"><br><br> Enter second number: <input type="text" name="num2"><br><br>

<input type="submit" value="Calculate">
</form>
</body>
</html>
 
calculate.jsp:
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<title>Result</title>
</head>
<body>
<h2>Result</h2>
<%
String operation = request.getParameter("operation");
double num1 = Double.parseDouble(request.getParameter("num1")); double num2 = Double.parseDouble(request.getParameter("num2")); double result = 0;
String errorMessage = null;

if ("add".equals(operation)) { result = num1 + num2;
} else if ("subtract".equals(operation)) { result = num1 - num2;
} else if ("multiply".equals(operation)) { result = num1 * num2;
} else if ("divide".equals(operation)) { if (num2 != 0) {
result = num1 / num2;
} else {
errorMessage = "Error: Cannot divide by zero."; request.setAttribute("error", errorMessage); request.getRequestDispatcher("error.jsp").forward(request, response);
}
}
%>

<% if (errorMessage == null) { %>
<p>Result of <%= operation %>: <%= result %></p>
<% } %>
</body>
</html>
