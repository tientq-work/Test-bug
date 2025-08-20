// logical-bug.ts
// Example: wrong use of bitwise instead of logical operator

const isAdmin = true;
const isActive = false;

// BUG: using & instead of &&
if (isAdmin & isActive) {
    console.log("User can access admin panel");
} else {
    console.log("Access denied");
}

// BUG: using | instead of ||
const hasPermission = false;
const isOwner = true;

if (hasPermission | isOwner) {
    console.log("User can edit the document");
} else {
    console.log("User cannot edit the document");
}
