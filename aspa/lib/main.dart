import 'package:flutter/material.dart';

void main() {
  runApp(const AspaApp());
}

class AspaApp extends StatelessWidget {
  const AspaApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'AsPa - Assistente Parkinson',
      theme: ThemeData(
        colorScheme: ColorScheme.fromSeed(seedColor: Colors.blue),
        useMaterial3: true,
      ),
      home: const Scaffold(
        body: Center(
          child: Text('AsPa - Inicializando...'),
        ),
      ),
    );
  }
}
