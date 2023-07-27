import React from "react";
import ReactDOM from "react-dom";
// import faker from "@faker-js/faker";
import { faker } from "@faker-js/faker";
import CommentDetails from "./CommentDetails";
import CardApproval from "./CardApproval";
import Document1 from "./Document1";
import Document2 from "./Document2";
import Segments from "./Segments";

const App = () => {
  return (
    <div className="ui container comments">
      <CardApproval>
        <CommentDetails
          author="KK"
          time="Today:7:18PM"
          text="I like it!"
          avatarImage={faker.image.avatar()}
        />
      </CardApproval>
      <CardApproval>
        <CommentDetails
          author="Sam"
          time="Today:8:02PM"
          text="Ohh! Nice"
          avatarImage={faker.image.avatar()}
        />
      </CardApproval>
      <CardApproval>
        <CommentDetails
          author="Jane"
          time="Today:8:18PM"
          text="wow!!!"
          avatarImage={faker.image.avatar()}
        />
      </CardApproval>
      <Segments>
        <Document1
          ButtonText="Add Document"
          DocText="No documents are listed for customer."
        />
      </Segments>
      <Segments>
        <Document2
          HeaderText="For Your Information"
          ParaText="dhfbshdhs vsuvhsk fhksgfkgfjhsgf kshkfvh ks."
        />
      </Segments>
    </div>
  );
};

ReactDOM.render(<App />, document.querySelector("#root"));
