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

#include "deletejobresponse.h"
#include "deletejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteJobResponse
 *
 * \brief The DeleteJobResponse class provides an interace for Glue DeleteJob responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteJob
 */

/*!
 * @brief  Constructs a new DeleteJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteJobResponse::DeleteJobResponse(
        const DeleteJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteJobResponsePrivate(this), parent)
{
    setRequest(new DeleteJobRequest(request));
    setReply(reply);
}

const DeleteJobRequest * DeleteJobResponse::request() const
{
    Q_D(const DeleteJobResponse);
    return static_cast<const DeleteJobRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue DeleteJob response.
 *
 * @param  response  Response to parse.
 */
void DeleteJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteJobResponsePrivate
 *
 * \brief Private implementation for DeleteJobResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteJobResponse instance.
 */
DeleteJobResponsePrivate::DeleteJobResponsePrivate(
    DeleteJobResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue DeleteJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteJobResponsePrivate::parseDeleteJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJobResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
