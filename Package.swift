// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "utiq",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "utiq",
            targets: ["utiq"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "utiq",
            path: "./utiq.xcframework"
        ),
    ]
)
