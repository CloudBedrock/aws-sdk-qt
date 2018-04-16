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

#include "listdistributionsresponse.h"
#include "listdistributionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsResponse
 *
 * \brief The ListDistributionsResponse class encapsulates CloudFront ListDistributions responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributions
 */

/*!
 * @brief  Constructs a new ListDistributionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDistributionsResponse::ListDistributionsResponse(
        const ListDistributionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListDistributionsResponsePrivate(this), parent)
{
    setRequest(new ListDistributionsRequest(request));
    setReply(reply);
}

const ListDistributionsRequest * ListDistributionsResponse::request() const
{
    Q_D(const ListDistributionsResponse);
    return static_cast<const ListDistributionsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront ListDistributions response.
 *
 * @param  response  Response to parse.
 */
void ListDistributionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDistributionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListDistributionsResponsePrivate
 *
 * \brief Private implementation for ListDistributionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListDistributionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDistributionsResponse instance.
 */
ListDistributionsResponsePrivate::ListDistributionsResponsePrivate(
    ListDistributionsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront ListDistributionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDistributionsResponsePrivate::parseListDistributionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionsResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
