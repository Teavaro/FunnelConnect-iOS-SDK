// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "FunnelConnect",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "FunnelConnect",
            targets: ["FunnelConnect"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "FunnelConnect",
            path: "./FunnelConnect.xcframework"
        ),
    ]
)
