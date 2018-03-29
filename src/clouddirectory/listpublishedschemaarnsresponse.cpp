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

#include "listpublishedschemaarnsresponse.h"
#include "listpublishedschemaarnsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  ListPublishedSchemaArnsResponse
 *
 * @brief  Handles CloudDirectory ListPublishedSchemaArns responses.
 *
 * @see    CloudDirectoryClient::listPublishedSchemaArns
 */

/**
 * @brief  Constructs a new ListPublishedSchemaArnsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPublishedSchemaArnsResponse::ListPublishedSchemaArnsResponse(
        const ListPublishedSchemaArnsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListPublishedSchemaArnsResponsePrivate(this), parent)
{
    setRequest(new ListPublishedSchemaArnsRequest(request));
    setReply(reply);
}

const ListPublishedSchemaArnsRequest * ListPublishedSchemaArnsResponse::request() const
{
    Q_D(const ListPublishedSchemaArnsResponse);
    return static_cast<const ListPublishedSchemaArnsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListPublishedSchemaArns response.
 *
 * @param  response  Response to parse.
 */
void ListPublishedSchemaArnsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPublishedSchemaArnsResponsePrivate
 *
 * @brief  Private implementation for ListPublishedSchemaArnsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPublishedSchemaArnsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPublishedSchemaArnsResponse instance.
 */
ListPublishedSchemaArnsResponsePrivate::ListPublishedSchemaArnsResponsePrivate(
    ListPublishedSchemaArnsResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListPublishedSchemaArnsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPublishedSchemaArnsResponsePrivate::ListPublishedSchemaArnsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPublishedSchemaArnsResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
