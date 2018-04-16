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

#include "listclustersresponse.h"
#include "listclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListClustersResponse
 *
 * \brief The ListClustersResponse class provides an interace for EMR ListClusters responses.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::listClusters
 */

/*!
 * @brief  Constructs a new ListClustersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListClustersResponse::ListClustersResponse(
        const ListClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new ListClustersResponsePrivate(this), parent)
{
    setRequest(new ListClustersRequest(request));
    setReply(reply);
}

const ListClustersRequest * ListClustersResponse::request() const
{
    Q_D(const ListClustersResponse);
    return static_cast<const ListClustersRequest *>(d->request);
}

/*!
 * @brief  Parse a EMR ListClusters response.
 *
 * @param  response  Response to parse.
 */
void ListClustersResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListClustersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListClustersResponsePrivate
 *
 * \brief Private implementation for ListClustersResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListClustersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListClustersResponse instance.
 */
ListClustersResponsePrivate::ListClustersResponsePrivate(
    ListClustersResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EMR ListClustersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListClustersResponsePrivate::parseListClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListClustersResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
