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

#include "deletetableresponse.h"
#include "deletetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteTableResponse
 *
 * \brief The DeleteTableResponse class provides an interace for Glue DeleteTable responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteTable
 */

/*!
 * @brief  Constructs a new DeleteTableResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTableResponse::DeleteTableResponse(
        const DeleteTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteTableResponsePrivate(this), parent)
{
    setRequest(new DeleteTableRequest(request));
    setReply(reply);
}

const DeleteTableRequest * DeleteTableResponse::request() const
{
    Q_D(const DeleteTableResponse);
    return static_cast<const DeleteTableRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue DeleteTable response.
 *
 * @param  response  Response to parse.
 */
void DeleteTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteTableResponsePrivate
 *
 * \brief Private implementation for DeleteTableResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTableResponse instance.
 */
DeleteTableResponsePrivate::DeleteTableResponsePrivate(
    DeleteTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue DeleteTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTableResponsePrivate::parseDeleteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTableResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
