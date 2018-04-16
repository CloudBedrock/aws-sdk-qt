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

#include "describeserviceaccesspoliciesresponse.h"
#include "describeserviceaccesspoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeServiceAccessPoliciesResponse
 *
 * \brief The DescribeServiceAccessPoliciesResponse class encapsulates CloudSearch DescribeServiceAccessPolicies responses.
 *
 * \ingroup CloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::describeServiceAccessPolicies
 */

/*!
 * @brief  Constructs a new DescribeServiceAccessPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeServiceAccessPoliciesResponse::DescribeServiceAccessPoliciesResponse(
        const DescribeServiceAccessPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeServiceAccessPoliciesResponsePrivate(this), parent)
{
    setRequest(new DescribeServiceAccessPoliciesRequest(request));
    setReply(reply);
}

const DescribeServiceAccessPoliciesRequest * DescribeServiceAccessPoliciesResponse::request() const
{
    Q_D(const DescribeServiceAccessPoliciesResponse);
    return static_cast<const DescribeServiceAccessPoliciesRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudSearch DescribeServiceAccessPolicies response.
 *
 * @param  response  Response to parse.
 */
void DescribeServiceAccessPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeServiceAccessPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeServiceAccessPoliciesResponsePrivate
 *
 * \brief Private implementation for DescribeServiceAccessPoliciesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeServiceAccessPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeServiceAccessPoliciesResponse instance.
 */
DescribeServiceAccessPoliciesResponsePrivate::DescribeServiceAccessPoliciesResponsePrivate(
    DescribeServiceAccessPoliciesResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudSearch DescribeServiceAccessPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeServiceAccessPoliciesResponsePrivate::parseDescribeServiceAccessPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeServiceAccessPoliciesResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
