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

#include "gettagsresponse.h"
#include "gettagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetTagsResponse
 *
 * \brief The GetTagsResponse class provides an interace for CostExplorer GetTags responses.
 *
 * \ingroup CostExplorer
 *
 *  The Cost Explorer API allows you to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 *  write operations for DynamoDB database tables in your production environment.
 * 
 *  </p
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The Cost Explorer API provides the following
 * 
 *  endpoint> <ul> <li>
 *
 * \sa CostExplorerClient::getTags
 */

/*!
 * @brief  Constructs a new GetTagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTagsResponse::GetTagsResponse(
        const GetTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetTagsResponsePrivate(this), parent)
{
    setRequest(new GetTagsRequest(request));
    setReply(reply);
}

const GetTagsRequest * GetTagsResponse::request() const
{
    Q_D(const GetTagsResponse);
    return static_cast<const GetTagsRequest *>(d->request);
}

/*!
 * @brief  Parse a CostExplorer GetTags response.
 *
 * @param  response  Response to parse.
 */
void GetTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetTagsResponsePrivate
 *
 * \brief Private implementation for GetTagsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTagsResponse instance.
 */
GetTagsResponsePrivate::GetTagsResponsePrivate(
    GetTagsResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CostExplorer GetTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTagsResponsePrivate::parseGetTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagsResponse"));
    /// @todo
}

} // namespace CostExplorer
} // namespace QtAws
