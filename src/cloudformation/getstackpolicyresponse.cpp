/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getstackpolicyresponse.h"
#include "getstackpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::GetStackPolicyResponse
 *
 * \brief The GetStackPolicyResponse class encapsulates CloudFormation GetStackPolicy responses.
 *
 * \ingroup CloudFormation
 *
 *  <fullname>AWS CloudFormation</fullname>
 * 
 *  AWS CloudFormation allows you to create and manage AWS infrastructure deployments predictably and repeatedly. You can
 *  use AWS CloudFormation to leverage AWS products, such as Amazon Elastic Compute Cloud, Amazon Elastic Block Store,
 *  Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly-reliable, highly scalable,
 *  cost-effective applications without creating or configuring the underlying AWS
 * 
 *  infrastructure>
 * 
 *  With AWS CloudFormation, you declare all of your resources and dependencies in a template file. The template defines a
 *  collection of resources as a single unit called a stack. AWS CloudFormation creates and deletes all member resources of
 *  the stack together and manages all dependencies between the resources for
 * 
 *  you>
 * 
 *  For more information about AWS CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">AWS
 *  CloudFormation Product
 * 
 *  Page</a>>
 * 
 *  Amazon CloudFormation makes use of other AWS products. If you need additional technical information about a specific AWS
 *  product, you can find the product's technical documentation at <a
 *
 * \sa CloudFormationClient::getStackPolicy
 */

/*!
 * @brief  Constructs a new GetStackPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetStackPolicyResponse::GetStackPolicyResponse(
        const GetStackPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new GetStackPolicyResponsePrivate(this), parent)
{
    setRequest(new GetStackPolicyRequest(request));
    setReply(reply);
}

const GetStackPolicyRequest * GetStackPolicyResponse::request() const
{
    Q_D(const GetStackPolicyResponse);
    return static_cast<const GetStackPolicyRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFormation GetStackPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetStackPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetStackPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetStackPolicyResponsePrivate
 *
 * \brief Private implementation for GetStackPolicyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetStackPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetStackPolicyResponse instance.
 */
GetStackPolicyResponsePrivate::GetStackPolicyResponsePrivate(
    GetStackPolicyResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFormation GetStackPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetStackPolicyResponsePrivate::parseGetStackPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStackPolicyResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
