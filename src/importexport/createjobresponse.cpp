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

#include "createjobresponse.h"
#include "createjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImportExport {

/*!
 * \class QtAws::ImportExport::CreateJobResponse
 *
 * \brief The CreateJobResponse class encapsulates ImportExport CreateJob responses.
 *
 * \ingroup ImportExport
 *
 *  <fullname>AWS Import/Export Service</fullname> AWS Import/Export accelerates transferring large amounts of data between
 *  the AWS cloud and portable storage devices that you mail to us. AWS Import/Export transfers data directly onto and off
 *  of your storage devices using Amazon's high-speed internal network and bypassing the Internet. For large data sets, AWS
 *
 * \sa ImportExportClient::createJob
 */

/*!
 * @brief  Constructs a new CreateJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateJobResponse::CreateJobResponse(
        const CreateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImportExportResponse(new CreateJobResponsePrivate(this), parent)
{
    setRequest(new CreateJobRequest(request));
    setReply(reply);
}

const CreateJobRequest * CreateJobResponse::request() const
{
    Q_D(const CreateJobResponse);
    return static_cast<const CreateJobRequest *>(d->request);
}

/*!
 * @brief  Parse a ImportExport CreateJob response.
 *
 * @param  response  Response to parse.
 */
void CreateJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateJobResponsePrivate
 *
 * \brief Private implementation for CreateJobResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateJobResponse instance.
 */
CreateJobResponsePrivate::CreateJobResponsePrivate(
    CreateJobResponse * const q) : ImportExportResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ImportExport CreateJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateJobResponsePrivate::parseCreateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateJobResponse"));
    /// @todo
}

} // namespace ImportExport
} // namespace QtAws
